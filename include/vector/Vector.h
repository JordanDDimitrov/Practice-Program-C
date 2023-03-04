#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdint.h>

#define START_VECTOR_SIZE 2

typedef struct
{
    void **items;
    size_t capacity;
    size_t size;
} Vector;

/** Initialize a vector
 * @param vec - A pointer to vector
 * @param initialCapacity - Capacity of vector
 */
void vectorInit(Vector *vec, size_t initialCapacity);


/** Resize vector
 * @param vec - A pointer to vector
 * @param capacity - Capacity of vector
 */
void vectorResize(Vector *vec, size_t capacity);


/** Add element to end of a vector
 * @param vec - A pointer to vector
 * @param item - pointer to element that we add
 */
void vectorPush(Vector *vec, void *item);

/** Check does pointer point to a valid address
 * @param ptr - A pointer
 * @return pointer if it's not null
 */
void *outOfMemoryGuard(void *ptr);


/** Delete element with given index
 * @param vec - A pointer to vector
 * @param idx - index of element
 */
void vectorDelete(Vector *vec, size_t idx);

#endif //VECTOR_H

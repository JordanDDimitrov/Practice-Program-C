#include "vector/Vector.h"
#include "vector/Errors.h"

#include <stdio.h>
#include <stdlib.h>

void vectorInit(Vector *vec, size_t initialCapacity)
{
    if(vec == NULL)
    {
        fprintf(stderr,"Invalid pointer in function \"vectorInit\" ");
        return;
    }
    vec->capacity = initialCapacity;
    vec->size = 0;
    vec->items =  outOfMemoryGuard(malloc(sizeof(void*) * vec->capacity));
}

void vectorResize(Vector *vec, size_t capacity)
{
    if(vec == NULL)
    {
        fprintf(stderr,"Invalid pointer in function \"vectorResize\" ");
        return;
    }
    void **items = outOfMemoryGuard(realloc(vec->items, sizeof(void*) * capacity));

    if (items)
    {
        vec->items = items;
        vec->capacity = capacity;
    }
    if (vec->size >= capacity)
    {
        vec->size = capacity;
    }
}

void vectorPush(Vector *vec, void *item)
{
    if(vec == NULL)
    {
        fprintf(stderr,"Invalid pointer in function \"vectorPush\" ");
        return;
    }

    if (vec->capacity == vec->size)
    {
        vectorResize(vec, vec->capacity * 2);
    }
    vec->items[vec->size] = item;
    vec->size++;
}

void *outOfMemoryGuard(void *ptr)
{
    if (ptr == NULL){

        fprintf(stderr, "out of memory\n");
        exit(ALLOCATION_ERROR);
    }
    return ptr;
}


void vectorDelete(Vector *vec, size_t idx)
{
    if (idx >= vec->size)
    {
        return;
    }

    vec->items[idx] = NULL;

    for (size_t i = idx; i < vec->size - 1; ++i)
    {
        vec->items[i] = vec->items[i + 1];
        vec->items[i + 1] = NULL;
    }

    vec->size--;
}

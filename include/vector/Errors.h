#ifndef ERRORS_H
#define ERRORS_H

#include <stdint.h>

typedef enum Errors{
    SUCCESS = 0,
    INVALID_POINTER,
    ALLOCATION_ERROR,
    DEALLOCATION_ERROR,
    INVALID_INPUT,
    INVALID_VALUE,
    NO_FREE_SPACE ,
    FILL_TEAM_ALLOCATED_ERROR,
}Error;


#endif //ERRORS_H
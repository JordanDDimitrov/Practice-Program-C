#ifndef PRACTICE_CMAKE_H
#define PRACTICE_CMAKE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "vector/Vector.h"

void cmake(const char *str);

typedef struct{
    Vector include;
    Vector src;
}CMake;

#endif //PRACTICE_CMAKE_H

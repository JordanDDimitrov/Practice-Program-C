//
// Created by JORDAN on 3/3/2023.
//

#include "prime_number.h"

static bool is_prime(int num);


void prime_number(){

    for (int i = 0 ; i < 100 ; i++){

        if (is_prime(i)){
            printf("%d " , i);
        }
//        printf("%d %s\n", i , is_prime(i) ? "true" : "false");

    }

}

bool is_prime(int num)
{
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
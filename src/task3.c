//
// Created by JORDAN on 3/3/2023.
//
//Welcome. In this kata, you are asked to square every digit of a number and concatenate them.
//
//For example, if we run 9119 through the function, 811181 will come out, because 9^2 is 81 and 1^2 is 1. (81-1-1-81)
//
//Example #2: An input of 765 will/should return 493625 because 7^2 is 49, 6^2 is 36, and 5^2 is 25. (49-36-25)
//
//Note: The function accepts an integer and returns an integer.
//
//Happy Coding!

#include "task3.h"
static unsigned long long square_digits (unsigned n);

void task3(){
    printf("%llu \n",square_digits(3212u)); //,                9414ull);
    printf("%llu \n",square_digits(      2112u)); //,,                4114ull);
    printf("%llu \n",square_digits(         0u)); //,,                   0ull);
    printf("%llu \n",square_digits(       999u)); //,,              818181ull);
    printf("%llu \n",square_digits(     10001u)); //,,               10001ull);
    printf("%llu \n",square_digits(3210987654u)); //,,    9410816449362516ull);
    printf("%llu \n",square_digits(3999999999u)); //,, 9818181818181818181ull);

}
//unsigned long long square_digits (unsigned n)
//{
//    unsigned digit = 0;
//    unsigned long long result = 0;
//    if (n) {
//        unsigned int divisor = 1;
//        while (divisor <= n / 10) {
//            divisor *= 10;
//        }
//        while (divisor > 0) {
//            digit = (n / divisor) % 10;
//            result = digit * digit + ((digit > 3) ? result * 100ULL : result * 10ULL);
//            divisor /= 10;
//        }
//    }
//    return result;
//}

unsigned long long square_digits (unsigned n)
{
    unsigned long long q = 0;
    unsigned long long m = 1;
    unsigned r;
    do {
        r = n % 10;
        q += r * r * m;
        m *= r > 3 ? 100 : 10;
    } while(n /= 10);
    return q;
}


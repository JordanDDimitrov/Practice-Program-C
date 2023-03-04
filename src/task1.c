#include "task1.h"

//Some numbers have funny properties. For example:
//
//89 --> 8¹ + 9² = 89 * 1
//
//695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
//
//46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51
//
//Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p
//
//        we want to find a positive integer k, if it exists, such that the sum of the digits of n taken to the successive powers of p is equal to k * n.
//In other words:
//
//Is there an integer k such as : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k
//
//If it is the case we will return k, if not return -1.
//
//Note: n and p will always be given as strictly positive integers.
static int sep(int n , int* sep_arr);
static int digPow(int n, int p);

void task1(){

    printf("%d\n", digPow(89, 1));
    printf("%d\n", digPow(92, 1));
    printf("%d\n", digPow(695, 2));
    printf("%d\n", digPow(46288, 3));
}
int digPow(int n, int p) {

    int numDigits = (int)floor(log10(n))+1;
    int result = 0;
    int num = n;
    for (int i = p + numDigits - 1; i >= p; i--) {
        result += (int)pow(num%10, i);
        num/=10;
    }
    return (result % n) ? -1 : result / n;
}
//
//int digPow(int n, int p) {
//    int number_digit[MAX] = {0};
//    int len = sep(n , number_digit);
//    int sum = 0;
////    int len = sizeof(number_digit) / sizeof(number_digit[0]);
//
//    for (int i = 0 ; i < len ; i++){
//        sum += pow(number_digit[i] , p);
//        p++;
//    }
//
//    return (sum % n) ? -1 : sum / n;
//}

int sep(int n , int* sep_arr){
    int digit = 0;
    int tmp_arr[MAX] = {0};
    int i = 0;
    while (n != 0){
        digit = n % 10;
        i++;
        tmp_arr[i] = digit;
        n /= 10 ;
    }
    for (int j = 0; j < i ; j++){
        sep_arr[j] = tmp_arr[i-j];
    }
    return i;
}
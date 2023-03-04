#include "perfect_number.h"

static int task_perfect_number(int n);
void perfect_number() {

    for (int i = 1 ; i < 10000 ; i++){
        if (task_perfect_number(i)){
            printf("%d ", i);

        }

    }
}


int task_perfect_number(int n){
    int sum = 0;
    for (int i = 1 ; i < n ; i++){
        if (n % i == 0){
            sum += i;
        }

    }
    return (sum == n) ? 1 : 0;

}


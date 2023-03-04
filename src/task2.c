#include "task2.h"

static int areEqual(double a, double b, double tolerance);
static float finduniq(const float *nums, size_t n);

void task2(){

    float test[] = { 0, 0, 0.55, 0, 0  };
    size_t n = 5;
    printf("%f", finduniq(test, n));
}

float finduniq(const float *nums, size_t n)
{
    float tolerance = 0.0001;
    float uniq_number = 0;
    int count = 0;
    for (size_t i = 0 ; i <= n ; i++){
        for(size_t j = 0 ; j <= n; j++){
            if (j == i){
                continue;
            }
            else if (fabs(nums[i] - nums[j]) < tolerance){
                count = 0;
                break;
            }
            count++;
        }
        if (count == n){
            uniq_number = nums[i];
            break;
        }
    }
    return uniq_number;
}

int areEqual(double a, double b, double tolerance) {
    return fabs(a - b) < tolerance;
}

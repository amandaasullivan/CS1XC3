#include <stdio.h>

int main() {
    
    for (int num = 1; num <= 1000; num++){
        int sum_factors = 0;
        for (int j = 1; j < num; j++){
            //if j is a perfect factor
            if (num%j == 0){
                sum_factors = sum_factors + j;
            }
        }
        if (sum_factors == num){
            printf("%d \n", num);
        }
    }
    return 0;
}

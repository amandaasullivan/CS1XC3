#include <stdio.h>
#include <stdbool.h>

bool perfect_square(int);

int main() {
    // x + 100 = n^2
    // x + 100 + 168 = m^2
    for (int i = -100; i <= 10000; i++){
        if (perfect_square(i+100) == true && perfect_square(i+100+168) == true){
            printf ("%d\n",i);
        }
    }
    return 0;
}

bool perfect_square(int n){
    for (int i = 1; i <= n; i++){
       if (i*i == n){
           return true;
       }
    }
    return false;
}

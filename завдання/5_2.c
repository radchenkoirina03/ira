//
//  5_2.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.2 */

#include <stdio.h>

int Fib(int n){
    
    int F0, F1, F;   // F0, F1, F2, F;
    F0 = F1 = 1;
    for (int i=2; i<=n; i++) {
        F = F0 + F1;    // F = F2 + F0 + 99
        F0 = F1;      // F0 = F1
        F1 = F;       // F1 = F2
    } return F;       // F2 = F;
}


int sum_fib(int m){
    
    int F0, F1, F, sum=2;
    F0 = F1 = 1;
    while (F1<m) {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
        sum += F;
    } return sum;
}


int main(){
    
    int n;
    scanf("%d", &n);
    printf("Fib(%d) = %d", n, Fib(n));
    printf("sum = %d\n", sum_fib(1000));
    
}

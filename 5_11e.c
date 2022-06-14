#include <stdio.h>

float Sum(int n){

    float x1 = 2, x;

    for (int i=1; i<=n; i++) {
        
        x = i*x1 + 1/i;
        
        x1 = x;
        
    } return x;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("Sum(%d) = %.3f\n", n, Sum(n));

}


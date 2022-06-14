//
//  5_17g.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.17g */

#include <stdio.h>
#include <math.h>

float Sum(float x){

    float f = x, s = 1, eps;

    for (int i=1; i<=1000; i++) {

        s *= i*2*i*(2*i+1)*pow(-1, i);
        f += pow(x, 2*i+1)/s;
        
    } return f;
}

int main(){

    float x, eps;
    scanf("%f %f", &x, &eps);
    printf("Sum = %.3f\n", Sum(x));

}

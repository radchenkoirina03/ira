#include <stdio.h>
#include <math.h>

float invsqrt(double x, int alfa){

    float y = x/(sqrt(1 + alfa*x*x));
    return y;

}

float derivative_invsqrt(double x, int alfa){

    float y1 = 1/( (1 + alfa*x*x)*(sqrt(1 + alfa*x*x)) );
    return y1;

}

int main(){

    printf("%.4f\n", invsqrt(2, 6));
    printf("%.4f\n", derivative_invsqrt(2, 6));

}


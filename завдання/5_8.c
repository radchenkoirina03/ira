//
//  5_8.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.8 */

#include <stdio.h>
#include <math.h>


double my_exp(double x, double eps){
    
    double y = 1.0, t = 1.0; // t = x^k/k!
    int k=0;
    
    while (fabs(t)>eps) {
        k++;
        t *= x/k;  //  1*x/1 = x/1!,  x/1!*x/2 = x^2/2!, x^2/2!*x/3 = x^3/3!
        y += t;
    }
    return y;
}


double my_Phi(double x, double eps){
    
    double t = -x*x*x/3, y = x+t;  // t = (-1)^k  x^(2k+1)/(2k-1)!/(2k+1)
    int k=1;
    
    while (fabs(t)>eps) {
        k++;
        t *= -x*x/(2*k+1)/(2*k-2);
        y += t;
    }
    return y;
}


void task8(){
    
    double x, eps;
    
    printf("x=");
    scanf("%lf", &x);
    
    do {
        printf("eps=");
        scanf("%lf", &eps);
    } while (eps<=0);
    
    printf("my_exp(%g) = %lf, \n real_exp(%g) = %lf\n", x, my_exp(x, eps), x, exp(x));
//    printf("Phi(%lf) = %lf", x, my_Phi(x, exp));
    
}


int main(){
    task8();
}


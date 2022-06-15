//
//  5_20.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.20 */

#include <stdio.h>
#include <math.h>


double fun(double x){
    return x*x*x + 4*x*x + x - 6;
}


double root(double eps, double a, double b){
    
    double un, u1 = (a+b)/2.0, u0 = a;
    un = u0 + 2*eps;
    u1 = un;
    
    while (fabs(un-u0)>eps) {
        un = u0 - fun(u0)*(u1-u0)/(fun(u1) - fun(u0));
        u0 = u1;
        u1 = un;
    }
    return un;
}


void task20(){
    
    double x, eps;
    
    do {
        printf("eps=");
        scanf("%lf", &eps);
        if (eps>0) break;
        printf("Vvedit epsilon > 0 shche raz");
    } while (1);
    
    x = root(eps, 0, 2.0);
    printf("f(%g) = %lf, as f(%g) = %lf", x, x, x, fun(x));
}


int main(){
    task20();
}

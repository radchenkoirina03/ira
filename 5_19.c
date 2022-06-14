//
//  5_19.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.19 */

#include <stdio.h>
#include <math.h>


double eqn(double x){
    return tan(x)-x;
}


double root(double eps, double a, double b){
    
    double mid = (a+b)/2.0;
    
    if (b-a<eps) {
        return mid;
    }
    
    if (fabs(eqn(mid))<eps) {
        return mid;
    }
    
    if (eqn(a)*eqn(mid)<=0) {
        return root(eps, a, b); //***
    } else {
        // look for root in (mid, b)
        return root(eps, mid, b);
    }
}


void task19(){
    
    double x, eps;
    
    do {
        printf("eps=");
        scanf("%lf", &eps);
        if (eps>0) break;
        printf("Vvedit epsilon > 0 shche raz");
    } while (1);
    
    x = root(eps, -0.02, 0.5);
    printf("tg(%lf) = %lf, as tg(%lf) = %lf", x, x, x, tan(x));
    
}


int main(){
    task19();
}

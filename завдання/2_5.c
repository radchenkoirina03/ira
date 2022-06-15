//
//  2_5.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//


//#include "2_5.h"

/* task 2.5 */

#include <stdio.h>
#include <math.h>

double Rosenbrock2d(double x, double y){

    return 100*pow(x*x-y,2)+pow(x-1,2);
    
}

int main(){

    printf("%lf", Rosenbrock2d(1,1));   //0
    printf("%lf", Rosenbrock2d(1,0));   //100
    printf("%lf", Rosenbrock2d(2,4));   //1

}






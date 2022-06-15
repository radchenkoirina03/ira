//
//  2_3.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "2_3.h"

/* task 2.3 */

#include <stdio.h>
#include <math.h>

double area(double x, double y, double z){
    double p = (x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
    
}

int main(){
    
    double a,b,c;
    printf("a,b,c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    
    double s = area(a,b,c);
    printf("area of triangle is %lf", s);
    
}





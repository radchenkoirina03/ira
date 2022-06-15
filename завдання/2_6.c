//
//  2_6.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "2_6.h"

/* task 2.6 */

#include <stdio.h>
#include <math.h>

//length of the side
double length(double x1, double y1, double x2, double y2){

    double l1 = x1 - x2;
    double l2 = y1 - y2;
    return sqrt(l1*l1 + l2*l2);

}

// Heron formula of triangle area
double area2(double x, double y, double z){

    double p = (x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));

}

int main(){

    double x1, x2, x3, y1, y2, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    double a,b,c;
    a = length(x1, y1, x2, y2);
    b = length(x1, y1, x3, y3);
    c = length(x3, y3, x2, y2);
    printf("area is %lf", area2(a,b,c));

}



//
//  2_2.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "2_2.h"

/* task 2.2 */

#include <math.h>
#include <stdio.h>

int main(){
    
    double a,b,c;
    printf("a=");
    scanf("%lf", &a);
    printf("b=");
    scanf("%lf", &b);
    c = hypot(a, b);
    printf("c= %0.2f\n", c);
    
}







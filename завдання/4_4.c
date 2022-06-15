//
//  4_4.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_4.h"

/* task 4.4 */

#include <stdio.h>

int main(){

    double x,y,t;
    unsigned n;

    printf("n=");
    scanf("%u", &n);

    printf("x=");
    scanf("%lf", &x);
    t = 1;
    y = 0;
    for (unsigned i=1;1<=n;i++) {
        t*=x;   // t == x^i
        y += i * t;
    }

    printf("y=%lf", y);
}

//
//  4_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_1.h"

/* task 4.1 */

#include <stdio.h>
#include <math.h>

float recursive_sin(float x, unsigned n){
    float y = x;
    for (unsigned i=0;i<n;i++) {
        y = sin(y);
    }
    return y;
}


int main(){
    unsigned n;
    float x;

    printf("x=");
    scanf("%f", &x);

    printf("n=");
    scanf("%u", &n);

    printf("y=%f", recursive_sin(x,n));
}

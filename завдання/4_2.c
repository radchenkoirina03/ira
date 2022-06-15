//
//  4_2.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_2.h"

/* task 4.2 */

#include <stdio.h>
#include <math.h>

int main(){

    unsigned n;

    printf("n=");
    scanf ("%u" , &n);

    // increasing order
    printf("%u!=",n); // n!=

    for (unsigned i=1;i<n;i++) {
        printf("%u" ,i);
    }
    printf("%u\n", n);

    //decreasing
    printf("\n%u!=", n); // n!=

    for (unsigned i=n;i>1;i--) {
        printf("%u*",i);
    }
    printf("%u",1);
}

//
//  4_5.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_5.h"

/* task 4.5 */

#include <stdio.h>

int main(){

    int n = 5;
    float s = 1;
    if (n%2 == 0) {
        for (int i = 2; i<=n; i+=2) {
            s *= i;
        }

    } else {

        for (int i = 1; i<=n; i+=2) {
            s *= i;
        }
    }

    printf("n!! = %f\n", s);

}

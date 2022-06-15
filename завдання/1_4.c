//
//  1_4.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "1_4.h"

/* task 1.4 */

#include <stdio.h>
#include <math.h>

int main(){

    double F, m1 = 985.98, m2 = 674.76, r = 566;
    F = 6.673 * m1 * m2 / (100000000000 * pow(r-1, 2));
    printf("F = %le\n", F);

}





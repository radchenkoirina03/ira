//
//  4_11.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 4.11 */

#include <stdio.h>
#include <math.h>
#include <float.h>

int main(int argc, char **argv){
    
    int i=0;
    double x, sum=0. , sum_harm=0.;
    do {
        printf("a[%d]=", i);
        scanf("%lf", &x);
        if (fabs(x) <= DBL_EPSILON) break;
        sum += x;
        sum_harm += 1/x;
        i++;
    } while (1);   //while(x!=0); // bad because double comparison
    
    printf("avg = %lf, harm = %lf\n", sum/i, i/sum_harm);
    
}

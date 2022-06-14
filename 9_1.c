//
//  9_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdlib.h> //malloc


int main(){
    unsigned n;
    printf("n=");
    scanf("%u", &n);
    
    double* mas = (double*) malloc(n*sizeof(*mas));
    double sq_sum = 0;
    
    for (unsigned i=0; i<n; i++) {
        scanf("%lf", &mas[i]);
        sq_sum += mas[i]*mas[i];
    }
    
    printf("s=%lf", sq_sum);
    
    free(mas);
}



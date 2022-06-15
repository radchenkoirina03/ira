//
//  1_8c.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "1_8c.h"

/* task 1.8c */

#include <stdio.h>

int main(){
    
    double x,y;
    
    printf("x,y:");
    scanf("%lf %lf", &x,&y);
    double avg, harmonical;
    avg = (x+y)/2;
    harmonical = 2/(1/x + 1/y);
    printf("avg=%lf, harmonical=%lf", avg,harmonical);
    
}





//
//  2_4c.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "2_4c.h"

/* task 2.4c */

#include <stdio.h>
#include <math.h>

double mnogochlen(double x){
    
    return x*x*x*x*x + 5*x*x*x*x + 10*x*x*x + 10*x*x + 5*x + 1;
    
}

int main(){
    
    printf("%lf", mnogochlen(1));
    
}



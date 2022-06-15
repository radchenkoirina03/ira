//
//  3_23b_new.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "3_23b_new.h"

/* task 3.23b */

#include <stdio.h>

float ReLu(float x){

    if (x>0) {
        return x;
    } else{
        return 0;
    }

}

float derivative_ReLu(float x){
    
    if (x>0) {
        return x;
    } else{
        return 0;
    }

}

int main(){

    printf("%.2f\n", ReLu(2));
    printf("%.2f\n", derivative_ReLu(2));

}

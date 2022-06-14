//
//  4_6b.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_6b.h"

/* task 4.6ab */

#include <stdio.h>
#include <math.h>

void task6a(){
    unsigned n;
    scanf("%u", &n);
    double y = sqrt(2);
    for (int i=0;i<n;++i) {
        y = sqrt(y + 2);
    }
    printf("%lf", y);
}


void task6b(){
    unsigned n;
    scanf("%u", &n);
    double y=sqrt(3*n);
    for (int i=3*n;i>3;i-=3) {
        y = sqrt(y + i-3);
    }
    printf("%lf",y);
}

int main(){

    task6a();
//    task6b();

}

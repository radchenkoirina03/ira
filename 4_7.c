//
//  4_7.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_7.h"

/* task 4.7 */

#include <stdio.h>
#include <math.h>

void task7(){
    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);
    float s = 1;
    float t = 1;
    for (int i=1;i<=n;i++) {
        t = t * x / i;
        s = s + t;
    }
    printf("%f", s);
}

int main(){
    task7();
}

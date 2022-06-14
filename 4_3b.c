//
//  4_3b.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_3b.h"

/* task 4.3b */

#include <stdio.h>
#include<math.h>

int main(){
    float x, y;
    int n;
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%d", &n);
    float s = 0;
    for (int i = 1; i<=n; i++){
        s = s + pow(x, pow(2, i)) * pow(y, i);
    }
    s = s + 1;
    printf("f(x,y)=%f", s);
}

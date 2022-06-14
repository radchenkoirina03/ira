//
//  4_3a.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "4_3a.h"

/* task 4.3a */

#include <stdio.h>
#include<math.h>

int main(){
    float x = 2;
    int n = 3;
//    scanf("%f", &x);
//    scanf("%d", &n);
    float s = 0;
    for (int i = 1; i<=n; i++){
        s = s + pow(x, i);
    }
    s = s + 1;
    printf("f(x,y)=%f", s);
}

//
//  1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

int main(){
    
    double m, v, E;
    
    printf("Masa:");

    scanf("%lf", &m);
    
    printf("Speed:");

    scanf("%lf", &v);
    
    E = m * v * v / 2;

    printf("E(k)=%le", E);
}

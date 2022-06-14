//
//  10_6ye.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>

struct Kolo{
    int radius;
    int x;
    int y;
};

int main(){
    struct Kolo k;

    printf("Radius:");
    scanf("%d", &k.radius);
    printf("\nCentr(x):");
    scanf("%d", &k.x);
    printf("\nCentr(y):");
    scanf("%d", &k.y);

    printf("Radius kola: %d\n", k.radius);
    printf("Centr kola: (%d,%d)\n", k.x, k.y);
}

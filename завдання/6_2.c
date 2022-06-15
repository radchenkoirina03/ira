//
//  6_2.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <inttypes.h>


int main(){
    int n;
    unsigned k;

    scanf("%d", &n);
    scanf("%u", &k);

    int res = n | (1<<k);
    printf("r=%d", res);
}


//
//  3_3c.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "3_3c.h"

#include <stdio.h>
#include <inttypes.h>

int main(){
    
    int32_t a,b,c; //int - 2^31 - 2^31
    printf("a,b,c:\n");
    scanf("%d,%d,%d", &a, &b, &c);
    
    // a)
    int32_t d = a*b*c; // 2^21^3 = 2^63/ int - 4 bytes 2^31
    printf("p=%d", d);
    
    // b) 1UL - unsigned long long
    int64_t d1 = (int64_t)a*b*c;
    printf("p=%" PRId64"\n", d1);  // "%" PRId64 - output int64_t
    
}




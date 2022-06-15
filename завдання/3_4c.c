//
//  3_4c.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "3_4c.h"

//task 3.4

#include <stdio.h>
#include <inttypes.h> // uint8_t , uint16_t


uint16_t dobutok(uint8_t a, uint8_t b){
    return (uint16_t)a*b;
    }

int main(){
    
    uint8_t a,b; // 2 8-bits numbers
    printf("a, b: \n");
    scanf("%hhu %hhu", &a, &b);
    
    printf("%hu" , dobutok(a, b));
    
}

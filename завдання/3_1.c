//
//  3_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "3_1.h"
//task 3.1

#include <stdio.h>
void output_digits(unsigned n){
    
    unsigned d1 = n % 10; //last digit
    unsigned d2 = (n / 10)%10; //2nd digit
    unsigned d3 = n / 100; //3rd digit
    printf("%u %u %u\n", d3, d2, d1);
    
}

void sum_digits(unsigned n){
    
    unsigned d1 = n % 10; //last digit
    unsigned d2 = (n / 10)%10; //2nd digit
    unsigned d3 = n / 100; //3rd digit
    printf("%u\n", d3+d2+d1);
    
}

void inversion(unsigned n){
    
    unsigned d1 = n % 10; //last digit
    unsigned d2 = (n / 10)%10; //2nd digit
    unsigned d3 = n / 100; //3rd digit
    printf("%u\n", d1*100 + 10*d2 + d3);
    
}

int main(){
    
    unsigned n; //natural n
    scanf("%u", &n);
    
    if((n<100) || (n>=1000)){ //n<100 or n >= 1000
        
        printf("%u is not 3-digit", n);
        return 0;
        
    }
        
    output_digits(n);
    sum_digits(n);
    inversion(n);
    
}




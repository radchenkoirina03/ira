//
//  3_2c.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "3_2c.h"

//task 3.2c

#include <stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    if((n<100) || (n>=1000)){ // n<100 or n>=1000
    printf("%d is not 3-digit", n);
    return 0;
        
    }
    
    unsigned d1 = n % 10; // last digit
    unsigned d2 = (n/10)%10; // 2nd digit
    unsigned d3 = (n/100); // 3rd digit
    
    if(d1==d2 || d1==d3 || d2==d3){
        
        printf ("There are equal digits");
        return 0;
        
    }
    
    printf("%d%d%d" , d1, d2, d3);
    printf("%d%d%d" , d1, d3, d2);
    printf("%d%d%d" , d2, d1, d3);
    printf("%d%d%d" , d2, d3, d1);
    printf("%d%d%d" , d3, d1, d2);
    printf("%d%d%d" , d3, d2, d1);
    
}

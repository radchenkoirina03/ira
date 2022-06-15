//
//  3_5c.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

//#include "3_5c.h"

//task 3.5

#include <stdio.h>
int main(){
    long long a,b;
    scanf("%Ld %Ld",&a, &b);
    
    if(a>b){
        printf("max=%Ld min=%Ld", a, b);
    }
    else{
        printf("max=%Ld min=%Ld", b, a);
    }
}

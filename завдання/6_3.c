//
//  6_3.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <inttypes.h>

int main(){

    uint64_t m;
    unsigned j;
   
    scanf("%" PRIu64"", &m);
    scanf("%u", &j);
    
    uint64_t res1 = m & ~(1<<3);
    
    printf("r=%" PRIu64 ", %" PRIx64, res1, res1);
    
}



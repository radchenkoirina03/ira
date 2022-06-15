//
//  6_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <inttypes.h>


int main(){
 //  unsigned char n;
   uint8_t n;
   scanf("%hhd",&n);
   
   //unsigned long long m = 1UL<<n;
   uint64_t m = 1UL<<n; // U - unsigned L - long long
   printf("2^%hhu = %" PRIu64 "\n", n, m);
}

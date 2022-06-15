//
//  6_6.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <inttypes.h>


size_t max_bits_in_row(unsigned x){

    size_t res = 0, count =0;;
    size_t num_bits = 8 * sizeof(x);

    for(int i=0;i<num_bits;i++){
        unsigned r = x & (1<<i);
        if(r){
            count++;
        }
        else{
            if(count>res){
                res = count;
            }
        }
    }

    return res;
}


int main(){

    for(int x=0; x<17;x++){

        int t1 = (x & (x-1))>0;
        int t2 = (x & -x);

        printf("%d: %d % d \n" , x, t1, t2);

    }

    int some_number = 0x01020304;

    b0 = some_number & 255;
    b1 = (some_number>>8) & 0xFF;
    b2 = (some_number>>16) & 0xFF;
    b3 = some_number>>24;

    if(b0 == 4 && b1==3){
       printf("big endian");
    }
    else if (b0==1){
       printf("little endian");
    }
    else if (b0==4 && b1==2){
       printf("midle endian");
    }
    else{
       printf("unknown");
    }
}

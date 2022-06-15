//
//  5_1.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.1 */

#include <stdio.h>

int get_harm(double a){
    
    double z=1.0, s=1.0;   // z = 1/i , s+=z
    
    while (s<a) {
        z++;
        s += 1/z;
    }
    printf("s=%lf\n", s);
    return (int) z;
    
}

int main(){
    
    double a;
    scanf("%lf", &a);
    
    printf("n=%d\n", get_harm(a));
    
}

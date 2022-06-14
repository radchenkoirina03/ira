//
//  5_7.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.7 */

#include <stdio.h>
#include <math.h>

int main(){
    
    int n;
    scanf("%d", &n);
    float s=0, a1=0, a2=1, b1=1, b2=0, ak, bk;
    s = s + 2/(a1+b1);
    s = s + 4/(a2+b2);
    for (int i=3; i<=n; i++) {
        bk = b2 + a2;
        ak = a2/i + a1*bk;
        a1 = a2;
        a2 = ak;
        b1 = b2;
        b2 = bk;
        s = s + pow(2, i)/(ak+bk);
    }
    printf("S=%f", s);
}





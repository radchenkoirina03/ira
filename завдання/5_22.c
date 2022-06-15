//
//  5_22.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

/* task 5.22 */

#include <stdio.h>
#include <math.h>


int main(){
    
    int n;
    scanf("%d", &n);
    float s, a0=1, b0=1/sqrt(2), t0=0.25, p0=1, a1, b1, t1, p1, ak, bk, tk, pk;
    
//    printf("%f %f %f %f\n", a0, b0, t0, p0);
    
    a1 = (a0 + b0)/2;
    b1 = sqrt(a0*b0);
    t1 = t0 - p0*(a0-a1)*(a0-a1);
    p1 = 2*p0;
    
//    printf("%f %f %f %f\n", a1, b1, t1, p1);
    
    for (int i=2; i<=n; i++) {
        bk = sqrt(a1*b1);
        ak = (a1 + b1)/2;
        pk = 2*p1;
        tk = t1 - p1*(a1-ak)*(a1-ak);
        
        s = (ak+bk)*(ak+bk)/(4*tk);
        
        a0 = a1;
        a1 = ak;
        
        b0 = b1;
        b1 = bk;
        
        p0 = p1;
        p1 = pk;
        
        t0 = t1;
        t1 = tk;
        
//        s = (ak+bk)*(ak+bk)/(4*tk);
        
    }
    
    printf("S=%f\n", s);
    
}

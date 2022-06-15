//
//  10_5.c
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <stdio.h>
#include <stdbool.h>


typedef struct{
    int numerator;
    unsigned int denominator;
} Rational;


void outputRational (Rational x){
    printf("%d/%u\n", x.numerator, x.denominator);
}


int inputRational (Rational* x){
    printf("Num:");
    scanf("%d", &x->numerator);
    printf("Den:");
    scanf("%u", &x->denominator);
    if(x->denominator == 0) return 0;
    return 2;
}


Rational addRational (Rational x, Rational y){
    Rational z;
    z.numerator = x.numerator * y.denominator + y.numerator * x.denominator;
    z.denominator = x.denominator * y.denominator;
    return z;
}


//multiplication
Rational multRational (Rational x, Rational y){
    Rational z;
    z.numerator = x.numerator * y.numerator;
    z.denominator = x.denominator * y.denominator;
    return z;
}


//comparison x>=y
bool greaterRational (Rational x, Rational y){
    return (x.numerator * y.denominator > y.numerator * x.denominator);
}


//comparison ==

bool cmpRational (Rational x, Rational y){
    return (x.numerator * y.denominator == y.numerator * x.denominator);
}


unsigned gcd( unsigned x, unsigned y){
    if(y>x) return gcd(x,y);
    if(y==0) return x;
    return gcd(y, x%y);
}


void reduce(Rational* x){
    unsigned d = gcd(x->numerator, x->denominator);
    x->numerator /= d;
    x->denominator /= d;
}


int main(){
    Rational r1, r2, r3;
    inputRational(&r1);
    inputRational(&r2);
    r3 = addRational(r1, r2);
    outputRational(r3);
    r3 = multRational(r1, r2);
    outputRational(r3);
    
    if (cmpRational(r1, r2)) {
        printf("r1==r2");
    } else{
        printf("r2>r1");
    }
    
//    reduce(&r1);
//    outputRational(r1);
    
}

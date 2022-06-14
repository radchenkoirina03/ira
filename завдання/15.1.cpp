//
//  Rational.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include "Rational.h"

void Rational::show(){
    std::cout<< nom <<"/"<< den <<" ";
}

int Rational::input(){
    std::cout<<"Input nom/denom:";
    std::cin>>nom;
    std::cin>>den;
    reduce();
    return 0;
}

Rational Rational::add(const Rational& second){
    
//    Rational z;
//    z.nom = nom * second.den + den * second.nom;
//    z.den = den * second.den;
//    return z;
    
    int x = (int)(nom * second.den + den * second.nom);
    unsigned y = den * second.den;
    return Rational(x, y);
    
}


Rational Rational::operator+(const Rational& second){
    int x = (int)(nom * second.den + den * second.nom);
    unsigned y = den * second.den;
    return Rational(x, y);
}

Rational Rational::operator-(const Rational& second){
    int x = (int)(nom * second.den - den * second.nom);
    unsigned y = den * second.den;
    return Rational(x, y);
}

Rational Rational::operator*(const Rational& second){
    int x = (int)(nom * second.den * den * second.nom);
    unsigned y = den * second.den;
    return Rational(x, y);
}

Rational Rational::operator/(const Rational& second){
    int x = (int)(nom * second.den / den * second.nom);
    unsigned y = den * second.den;
    return Rational(x, y);
}


int Rational::setNom(int x){
    nom = x;
    return 0;
}

int Rational::setDen(unsigned den){
    if (den==0) {
        return -1;
    }
    this->den = den;
    return 0;
}

void Rational::reduce(){
    unsigned gcd = GCD(nom, den);
    
    this->nom /= gcd;
    this->den /= gcd;
}

unsigned Rational::GCD(unsigned x, unsigned y){
    if (x==0 || y==0) return y+x;
    
    if (x>y) return GCD(y, x%y);
    else return GCD(x, y%x);

}




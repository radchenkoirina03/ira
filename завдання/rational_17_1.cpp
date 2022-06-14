//
//  rational_17_1.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "rational_17_1.hpp"
#include <iostream>
#include <cmath>
#include <exception>

void Rational::reduce(){
    int nsd;
    if (nom>=0) {
        nsd = (int)GCD(nom, denom);
    } else {
        nsd = (int)GCD(-nom, denom);
    }
    
    nom/=nsd;
    denom/=nsd;
}

Rational Hregory(double eps){
    Rational s;
    int sign = -1;
    
    for (int i=2; eps*i*i<1; i++) {
        Rational tmp;
        tmp.setNom(sign);
        sign = -sign;
        tmp.setDenom(i*i);
        s = s + tmp;
        if (tmp<1.0/(i*i)) break;
    }
    return s;
}


void writeToFile(std::string fname, const Rational& r){
    try {
        std::fstream f1;
        f1.open(fname.c_str(), std::ios::app);
        
        f1<<r.nom<<r.denom;
        f1.close();
    } catch (...) {
        std::cerr<<"problems with writing to file";
    }
}


int main(){
    Rational r1, r2(2,3), r5;
    r1.input();
    
    Rational r3 = -r1 + r2;
    Rational r4 = r1 * r2;
    r3.show();
    
    
}

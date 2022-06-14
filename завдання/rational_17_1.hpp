//
//  rational_17_1.hpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef rational_17_1_hpp
#define rational_17_1_hpp

#include <iostream>
#include <cmath>
#include <exception>


class WrongRatioException: public std::exception{
    int nom;
public:
    WrongRatioException(){}
    WrongRatioException(int x){
        nom = x;
    }
    void show(){
        std::cerr<<"Ratio Exception\n"<<nom<<"\n";
    }
};


class Rational{
private:
    int nom;
    unsigned denom;
public:
    
    Rational(){
        nom = 1;
        denom = 1U;
    }
    
    Rational(int x, unsigned y): nom(x), denom(y){
        if (denom==0) throw WrongRatioException();
        reduce();
    }
    
    void show();
    int input();
    
    int setNom(int x){
        nom = x;
        return 0;
    }
    
    int setDenom(unsigned y){
        if (y!=0) {
            denom = y;
            return 0;
        }
        throw WrongRatioException(nom);
        return -1;
    }
    
    Rational add(const Rational& x);
    Rational mult(const Rational& x);

    Rational operator+(const Rational& x){
        return add(x);
    }

    Rational operator*(const Rational& x){
        return mult(x);
    }

    Rational operator-(const Rational& x){
        int ch = static_cast<int>(x.denom*nom - x.nom*denom);
        unsigned zn = x.denom*denom;
        return Rational(ch, zn);
    }
    
    Rational operator/(const Rational& x){
        int ch = static_cast<int>(x.denom*nom);
        unsigned zn = x.denom*nom;
        return Rational(ch, zn);
    }
    
    Rational operator-(){
        return Rational(-nom, denom);
    }
    
    bool less(const Rational& x){
        return (nom*x.denom < denom*x.nom);
    }
    
    bool compare(double z){
        return fabs(z - (nom+0.)/denom);
    }
    
    bool operator<(const Rational& x){
        return less(x);
    }
    
    bool operator>(const double x){
        return fabs(x - static_cast<double>(nom)/denom);
    }
    
    bool operator==(const Rational& x){
        return (nom*x.denom == denom*x.nom);
    }
    
    bool operator!=(const Rational& x){
        return (nom*x.denom != denom*x.nom);
    }
    
    static unsigned GCD(unsigned x, unsigned y);
    
    friend void writeToFile(std::string fname, const Rational& r);
    
    friend std::ostream& operator<<(std::ostream& output, const Rational& D){
        output<< D.x <<"/"<< D.y <<std::endl;
        return output;
    }
        
    friend std::istream& operator>>(std::istream& input, Rational& D){
        input>>D.x>>D.y;
        return input;
    }
    
private:
    void reduce();
 
};

#endif /* rational_17_1_hpp */

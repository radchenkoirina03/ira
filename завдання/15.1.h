//
//  Rational.h
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef Rational_h
#define Rational_h

class Rational {
    
private:
    int nom;
    unsigned den;
    
public:
    
    Rational(){}
    
    Rational(int x, unsigned y){
        nom = x;
        den = y;
        reduce();
    }
    
    void show();
    int input();
    Rational add(const Rational& second);
    
    Rational operator-(const Rational& second);
    Rational operator+(const Rational& second);
    Rational operator*(const Rational& second);
    Rational operator/(const Rational& second);
//    Rational operator<(const Rational& second);
//    Rational operator>(const Rational& second);
//    Rational operator==(const Rational& second);
//    Rational operator!=(const Rational& second);
    
    bool operator<(const Rational& second){
        return nom * second.den < den * second.nom;
    }
    
    bool operator>(const Rational& second){
        return nom * second.den > den * second.nom;
    }
    
    bool operator==(const Rational& second){
        return nom * second.den == den * second.nom;
    }
    
    bool operator!=(const Rational& second){
        return nom * second.den != den * second.nom;
    }
    
    // TODO -, *, /, <, >, ==, !=
    
    int setNom(int x);
    int setDen(unsigned y);
    
    friend std::ostream& operator<< (std::ostream& f, const Rational& x){
        f<< x.nom <<"/"<< x.den <<"\n";
        return f;
    }
        
    friend std::istream& operator>> (std::istream& f, Rational& x){
        f>>x.nom;
        f>>x.den;
        return f;
    }
    
private:
    void reduce();
    
    static unsigned GCD(unsigned x, unsigned y);
};

#endif /* Rational_h */

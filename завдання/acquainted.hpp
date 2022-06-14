//
//  acquainted.hpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef acquainted_hpp
#define acquainted_hpp
#include "person.hpp"
#include <iostream>
#include <string>
#include <fstream>

namespace Proj{

class Acquainted : public Person{
    std::string phone;
public:
    Acquainted();
    Acquainted(const std::string& s, unsigned y, const std::string& ph): Person(s, y), phone(ph){}
    ~Acquainted();
    
    friend std::ofstream& operator<<(std::ofstream& f, const Acquainted& p){
        f<<"name:"<<p.name<<", "<<p.byear<<"\n";
        return f;
    }
    
    friend std::ifstream& operator>>(std::ifstream& f, Acquainted& p){
        std::cout<<"name, year, phone:";
        f>>p.name>>p.byear>>p.phone;
        return f;
    }
    
    void setPhone(const std::string& ph);
    std::string getPhone() const;
    };
}

#endif /* acquainted_hpp */

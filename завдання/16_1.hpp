//
//  person.hpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef person_hpp
#define person_hpp
#include <iostream>
#include <string>
#include <fstream>

namespace Proj{

class Person{
protected:
    std::string name;
    unsigned byear;
    
public:
    Person();
    Person(const std::string& name_, unsigned y):name(name_), byear(y){}
    ~Person();
    
    friend std::ofstream& operator<<(std::ofstream& f, const Person& p){
        f<<"name:"<<p.name<<", "<<p.byear<<"\n";
        return f;
    }
    
    friend std::ifstream& operator>>(std::ifstream& f, Person& p){
        std::cout<<"name, year";
        f>>p.name>>p.byear;
        return f;
    }
    std::string getName() const;
};
}

#endif /* person_hpp */

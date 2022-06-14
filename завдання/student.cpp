//
//  student.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "student.hpp"
#include <iostream>
#include <string>
#include <cctype>

void Student::show(){
    std::cout<<pib<<", age"<<age<<", "<<(gender?"male":"female")<<"\n";
    std::cout<<kurs<<", "<<grupa<<", "<<vuz<<"\n";
}

int Student::input(){
    Humanoid::input();
    std::cout<<"kurs, grupa, vuz:";
    try {
        std::cin>>kurs;
        std::cin>>grupa;
        std::cin>>vuz;

    } catch (...) {
        throw std::exception();
    }
    return 0;
}

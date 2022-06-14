//
//  acquainted.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "acquainted.hpp"
#include "person.hpp"

#include <iostream>


Proj::Acquainted::Acquainted(){
    
}

Proj::Acquainted::~Acquainted(){
    
}

void Proj::Acquainted::setPhone(const std::string& ph){
    phone = ph;
}

std::string Proj::Acquainted::getPhone() const{
    return phone;
}

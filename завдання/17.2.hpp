//
//  postgrad.hpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef postgrad_hpp
#define postgrad_hpp

#include <iostream>
#include "student.h"
#include "lecturer.h"

class PostGrad: public Lecturer, Student{
public:
    PostGrad(){}
    PostGrad(std::string name, unsigned age_, std::string sex,
             std::string vuz_, std::string pos, double zp,
             int kurs_, std::string grupa):
    Lecturer(name, age_, sex, vuz_, pos, zp){
        kurs = kurs_;
        this->grupa = grupa;
    }
    
    void show();
    int input();
    
    void outVUZ(){
        std::cout<<"post grad vuz "<<vuz;
    }
};

#endif /* postgrad_hpp */

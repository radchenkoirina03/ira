//
//  lecturer.h
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef lecturer_h
#define lecturer_h

#include <iostream>
#include "human.h"

class Lecturer: virtual public Humanoid{
    std::string vuz1;
protected:
    std::string posada;
    double salary;
    
public:
    Lecturer(){}
    Lecturer(std::string name, unsigned age_, std::string sex,
             std::string vuz_, std::string pos, double zp):
             Humanoid(name, age_, sex), vuz1(vuz_), posada(pos), salary(zp){}
    
    void show();
    int input();
    void outVuz(){
        std::cout<<"lecturer vuz "<<vuz1;
    }
};

#endif /* lecturer_h */

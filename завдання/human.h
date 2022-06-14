//
//  human.h
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef human_h
#define human_h

#include <iostream>
#include <string>
#include <cctype>

class Humanoid{
protected:
    std::string pib;
    unsigned age;
    bool gender;
    
public:
    Humanoid(){}
    Humanoid(std::string name, unsigned age_, std::string sex);
    
    virtual void show();
    
    int input();
    
    virtual void outVUZ() = 0;
};


#endif /* human_h */

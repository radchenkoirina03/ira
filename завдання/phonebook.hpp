//
//  phonebook.hpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef phonebook_hpp
#define phonebook_hpp

#include <cstring>
#include "acquainted.hpp"

namespace Proj{

class Phonebook{
    
    size_t n;
    char fname[255];
public:
    Phonebook();
    Phonebook(size_t n);
    Phonebook(const char * name, size_t n=100);
    
    ~Phonebook();
    
    void setName(const char * f){
        strcpy(fname, f);
    }
    
    int pushAcquainted(const Acquainted& aq);
    bool findNumber(const std::string& name, std::string& phone);
    int modifyNumber(const std::string& name, const std::string& phone);
};
}






#endif /* phonebook_hpp */

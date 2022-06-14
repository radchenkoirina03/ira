//
//  phonebook.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "phonebook.hpp"
#include "person.hpp"
#include "acquainted.hpp"
#include <iostream>
#include <fstream>

Proj::Phonebook::Phonebook(){
    n=0;
    strcpy(fname, "\0");
}

Proj::Phonebook::Phonebook(size_t n){
    this->n = n;
//    records = new Acquainted[n];
    strcpy(fname, "\0");

}

Proj::Phonebook::Phonebook(const char * name, size_t n){
    this->n = n;
//    records = new Acquainted[n];
    strcpy(fname, name);

}

Proj::Phonebook::~Phonebook(){

//    if (records ) delete [] records;
}

int Proj::Phonebook::pushAcquainted(const Acquainted& aq){
    std::fstream f;
    f.open(fname, std::fstream::app);
    if (f.bad()) {
        return -1;
    }
    f<<aq.getName()<<" "<<aq.getPhone()<<" ";
    f.close();
    return 0;
}

bool Proj::Phonebook::findNumber(const std::string& name, std::string& phone){
    std::fstream f;
    f.open(fname, std::ios::out);
    if (f.bad()) {
        return -1;
    }

    std::string nom;
    std::string ph;
    phone = "\0";

    while (true) {
        if(f>>nom){
            if (f>>ph) {
                if (nom==name) {
                    phone = ph;
                    f.close();
                    return true;
                }
            }
            else {
                f.close();
                return false;
            }
        }
        else {
            f.close();
            return false;
        }
    }
    f.close();
    return false;
}


int Proj::Phonebook::modifyNumber(const std::string& name, const std::string& phone){
    std::fstream f;
    f.open(fname, std::ios::in);
    if (f.bad()) {
        return -1;
    }

    std::fstream g;
    g.open("tempfile.txt", std::ios::out);

    std::string nom;
    std::string ph;
    int k = -1;
    int i = 0;

    while (true) {
        if(f>>nom){
            if (f>>ph) {
                i++;
                if (nom==name) {
                    g<<nom<<" "<<phone<<" ";
                    k = i;
                }
            }
            else {
                g<<nom<<" "<<ph<<" ";
            }
        }
        else {
            f.close();
            break;
        }
    }
    g.close();

    rename("tempfile.txt", fname);

    return i;
}


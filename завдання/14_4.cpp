//
//  14_4.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <cctype>


int main(int argc, char **argv){
    
    const char * fname = "text2.txt";
    std::fstream f(fname, std::fstream::in);
    
    if (f.bad()) {
        std::cerr<<"error opening file: "<<fname<<"\n";
        return -1;
    }
    
    std::string buf;
    
    std::string tag1 = "<td>";
    std::string tag2 = "<\\td>";
    
    int countTags=0;
    
    bool isCorrectTags;
    
    while (f>>buf) {
        
        std::clog<<";"<<buf<<";";
        
        if (buf==tag1) {
            countTags++;
        }
        std::clog<<"\""<<buf<<"\""<<tag2;
        if (buf==tag2) {
            countTags--;
        }
        
        if (countTags<0) {
            isCorrectTags = false;
            break;
        }
        std::clog<<countTags<<",";
    }
    isCorrectTags = (countTags==0);
    
    f.close();
    
    std::cout<<std::boolalpha<<isCorrectTags;
}

//
//  14_2.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


int main(int argc, char **argv){
    
    const char * fname = "text2.txt";
    std::fstream f(fname, std::fstream::in);
    
    if (f.bad()) {
        std::cerr<<"error opening file: "<<fname<<"\n";
        return -1;
    }
    
    std::string stroka;
    
    std::string articles[] = {std::string("der"), std::string("die"), std::string("das")};
    std::string res;
    
    while (!f.eof()) {
        getline(f, stroka);
        
        std::string word;
        std::string s="";
        bool inWord = false;
        bool isArtikel = false;
        
        for (size_t i=0; i<stroka.length(); i++) {
            if (isspace(stroka[i])) {
                if (inWord) {
                    word = s;
                    inWord = false;
                    res += word;
                    res.append(" ");
                    
                    s="";
                }
            }
            else {
                if (!inWord) {
                    inWord = true;
                    
                    for (int j=0; j<3; j++) {
                        if (word==articles[j]) {
                            isArtikel = true;
                        }
                    }
                    if (isArtikel) {
                        s.push_back(toupper(stroka[i]));
                    }
                    else {
                        s.push_back(stroka[i]);
                    }
                    isArtikel = false;
                }
                else {
                    s.push_back(stroka[i]);
                }
            }
        }
        
        res += s;
        res.push_back('\n');

        
    }
    
    f.close();
    
//    std::cout<<res;
    
    std::fstream f1(fname, std::fstream::out);
    
    f1<<res;
    f1.close();
    
}

//
//  18_main.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <string>
#include <fstream>

template <>
char* max2(char* a, char* b){
    if (strcmp(a>b)>0) return a;
    return b;
}


int main(int argc, char ** argv){
    int c = max2<int>(23, 45);
    std::cout<<c;
    double d = max2(22.3, 55.8);
    std::cout<<d;
    
    std::string s1("abc");
    std::string s2("bca");
    std::cout << max2<std::string>("abc", "bca");
    
    return 0;
}

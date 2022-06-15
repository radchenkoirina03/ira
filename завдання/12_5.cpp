//
//  12_5.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <cmath>

int main(){
    double mas[1000];
    char fname[] = "text4.txt";

    std::fstream f(fname, std::fstream::in);
    if (!f) {
        std::cerr<<"error reading file"<<fname<<"\n";
        return -1;
    }
    long long x;
    int k=0;
    while (f>>x) {
        if(x<0) continue;
        mas[k++] = sqrt(x);
    }
    fclose();

    for (int i=k-1; i>=0; i--) {
        std::cout<<mas[i]<<std::endl;
    }
}

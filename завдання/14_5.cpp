//
//  14_5.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <cctype>
#include <sstream>
#include <string>


int main(int argc, char **argv){
    
    const char * fname = "text5.txt";
    std::fstream f(fname, std::fstream::in);
    
    if (f.bad()) {
        std::cerr<<"error opening file: "<<fname<<"\n";
        return -1;
    }
    
    std::string line;
    
    while (getline(f, line)) {
        
        std::clog<<line<<"\n";
        int k=0, prev=0;
        std::string surname;
        std::string kurs;
        std::string group;
        std::string marks;
    
        for (int i=0; i<line.length(); i++) {
            if (isspace(line[i])) {
                if (k==0) {
                    surname = line.substr(0,i);
                    prev = i+1;
                }
                else if (k==1) {
                    kurs = line.substr(prev, i-prev);
                    prev = i+1;
                }
                else if (k==2) {
                    group = line.substr(prev, i-prev);
                    prev = i+1;
                }
                else if (k==3) {
                    marks = line.substr(prev, i-prev);
                    prev = i+1;
                }
                k++;
            }
        }
        std::string::size_type pos = line.rfind(" ");
        marks = line.substr(line.length(), line.length()-pos);
        
        std::clog<<surname<<", "<<kurs<<", "<<group<<", "<<marks<<"\n";
        
        double avg = 0.;
        int prev2 = 0, count = 0;
        for (int i=0; i<marks.length(); i++) {
            if (marks[i]==',') {
                std::string buf = marks.substr(prev2, i-prev2);
                std::clog<<buf<<" ";
                prev2 = i+1;
                int mark;
                std::istringstream(buf)>>mark;
                avg += mark;
                count++;
            }
        }
        
    f.close();
    }
}

//
//  15_2.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

#include "Point.hpp"

int Point::count = 0;

double dist(const Point& z){
    return sqrt(z.x);
}


int main(int argc, char **argv){
    
    std::string buf;
    Point pt;
    Point fstPt;
    Point prevPt;
    bool first = true;
    double per = 0;
    
    do {
        std::cout << "Another point y/n?";
        std::cin >> buf;
        if (buf.length()>0 && (buf[0]=='y' || buf[0]=='Y')) {
            pt.input();
            if (first) {
                fstPt = pt;
            }
            else {
                per += prevPt.dist(pt);
            }
            first = false;
            prevPt = pt;
        }
        if (buf.length()>0 && (buf[0]=='n' || buf[0]=='N')) {
            break;
        }
        
    } while(true);
    
    per += prevPt.dist(fstPt);
    std::cout << "N of vertixes:" << Point::counter() << "\n";
    std::cout << "Perimeter" << per;
    
    return 0;
    
}


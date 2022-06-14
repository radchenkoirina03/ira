//
//  Point.h
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>
#include <cmath>

class Point {
//    int x;
//    int y;
//    static int count;
    
    
public:
    int x;
    int y;
    static int count;
    Point();
    Point(int x_, int y_):x(x_),y(y_){count++;}
    
    double dist(const Point& z){
        return sqrt(z.x);
    }
    
    int input();
    
    int counter();
    
    
    ~Point();
    
    
};




#endif /* Point_hpp */

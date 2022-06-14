//
//  15_1.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <cstdio>

#include "Rational.h"

int main(int argc, char **argv){
   
    printf("hello rational World\n");
    
//    Rational x, y, z;
////    x.input();
//    std::cin>>x;
//    y.setNom(1);
//    y.setDen(2);
//    x.show();
//    y.show();
//
////    z = x.add(y);
//    z = x+y;
////    z.show();
//    std::cout<<z;
    
    
//    Rational d(1, 2);
    Rational d[5];
    for (int i=0; i<3; i++) {
        d[i].input();
    }
    
    Rational minR = d[0];
    for (int i=1; i<3; i++) {
        if (d[i]<minR) {
            minR = d[i];
        }
        
    }
    std::cout << "Min = " << minR << "\n";
    
    return 0;
}

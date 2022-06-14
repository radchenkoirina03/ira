//
//  main_f.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include "phonebook.hpp"


using namespace std;
using namespace Proj;


int main(int argc, char **argv){
    Phonebook pb("pb1.txt");
    
    int n;
    cout<<"n=";
    cin>>n;
    Acquainted aq;
    for (int i=0; i<n; i++) {
        cin>>aq;
        pb.pushAcquainted(aq);
    }
    string nom;
    cout<<"PIB:";
    cin>>nom;
    string tel;
    if (pb.findNumber(nom, tel)) {
        cout<<"Tel:"<<tel;
    }
    else {
        cout<<"no such name";
    }
    return 0;
}

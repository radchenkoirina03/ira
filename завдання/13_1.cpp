//
//  13_1.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <string>     //class std::string


using namespace std;


void task1(string& s){
    string::size_type posComa = s.find(',');   //position of first coma
    string::size_type posSemicolon = s.find(';', posComa+1);  //position of first semicolon after coma
    
//    cout<<posComa<<","<<posSemicolon;
    
    if (posComa == string::npos) {   //no coma
        ;
    }
    else if (posSemicolon == string::npos){
        s.erase(0, posComa);    //erase 0 from posComa symbols
    }
    else{
        s = s.substr(posComa+1, posSemicolon-posComa-1);
    }
}


int main(int argc, char **argv){
    string s;
    cout<<"s=";
    cin>>s;    //input for the first delimeter
    
    task1(s);
    
//    cout<<s;
    cout<<"answer:"<<s<<"\n";
    
}



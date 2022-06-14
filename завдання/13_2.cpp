//
//  13_2.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <string>     //class std::string
#include <cctype>

using namespace std;


string task2(const string& s){
    
    size_t coma_first = 0;
    size_t coma_last = s.length()-1;
    
    while (s[coma_first] != ',' && coma_first < s.length()) {
        coma_first++;
    }
    while (s[coma_last] != ',' && coma_last > coma_first) {
        coma_last--;
    }
    
    if (coma_first >= s.length()) {
        size_t space_pos = 0;
        while (isspace(s[space_pos]) && space_pos < s.length()) {
            space_pos++;
        }
        return s.substr(space_pos, s.length() - space_pos);
    }
    
    if (coma_first == coma_last) {
        return s.substr(coma_first, s.length() - coma_first);
    }
    
    string res(s);
    
    return res.erase(coma_first, coma_last - coma_first+1);
    
}


int main(int argc, char **argv){
    string s;
    cout<<"s=";
//    cin>>s;
    getline(cin, s);
    
    cout<<"answer:"<<task2(s)<<"\n";
}

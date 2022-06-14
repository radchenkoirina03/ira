//
//  13_3.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <string>     //class std::string
#include <cctype>


using namespace std;


string deleteLastSymbol(const string& s){
    bool inWord = false;
    string res;
    
    string word;
    size_t min_len = 234234234;
    string min_word;
    
    for (int i=0; i<s.length(); i++) {
        if (isspace(s[i])) {
            if (inWord) {
                res.erase(res.length()-1, 1);
                res.push_back(' ');
                
                size_t len = word.size();
                
                if (min_len > len) {
                    min_len = len;
                    min_word = word;
                }
                
                word = "";
                inWord = false;
            }
            continue;
        }
        inWord = true;
        res.push_back(s[i]);
        word.push_back(s[i]);
    }
    res = res.substr(0, res.length()-1);
    
    return res;
}


//string deleteLastSymbol(const string& s){
//    bool inWord = false;
//    string res;
//    for (int i=0; i<s.length(); i++) {
//        if (isspace(s[i])) {
//            if (inWord) {
//                res.erase(res.length()-1, 1);
//                res.push_back(' ');
//
//                inWord = false;
//            }
//            continue;
//        }
//        inWord = true;
//        res.push_back(s[i]);
//    }
//    res = res.substr(0, res.length()-1);
//
//    return res;
//}


int main(int argc, char **argv){
    string s;
    cout<<"s=";
//    cin>>s;
    getline(cin, s);
    
    string mas[10];
    
//    cout<<"answer:"<<task2(s)<<"\n";
    cout<<"answer:"<<deleteLastSymbol(s)<<"\n";
}

//
//  13_4.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <string>     //class std::string
#include <cctype>


using namespace std;


int task4(const string& s, int n, string mas[], char delim = ' '){
    size_t k = 0;
    string::size_type pos_start = 0;
    string::size_type pos_end = s.find(delim, 1);
    
    while (pos_end != string::npos && k<n) {
        if (pos_end > pos_start) {
            mas[k++] = s.substr(pos_start, pos_end - pos_start);
        }
        pos_start = pos_end+1;
        pos_end = s.find(delim, pos_start);
    }
    mas[k++] = s.substr(pos_start, s.length() - pos_start);
    
    return k;
}
    
    
int main(int argc, char **argv){
    string s;
    cout<<"s=";
//    cin>>s;
    getline(cin, s);
    
    string mas[10];
    
    int k = task4(s, 10, mas);
    cout<<"k="<<k<<"\n";
    for (int i=0; i<k; i++) {
        cout<<mas[i]<<" ";
    }
}

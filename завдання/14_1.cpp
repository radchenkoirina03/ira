//
//  14_1.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main(){
    char fname[] = "text3.txt";
    fstream f(fname);
    if (!f) {
        cerr<<"error reading file"<<fname<<"\n";
        return -1;
    }
    
    char c;
    int num=0;
    int num2=0;
    int summ=0;
    int prev_sign=0;  // 0 - initial, 1 - was+, 2 - was-
    
    while (f>>c) {
        //c is digit
        if (isdigit(c)) {
            int d = c - '0';
            num = num*10 + d;
        }
        
        else if (c=='-') {
            num2 = num;
            num=0;
            if (prev_sign==1||prev_sign==0) {
                summ += num2;
            } else if (prev_sign==2){
                summ -= num2;
            }
            prev_sign = 2;
            cout<<summ<<"; ";
        }
        
        else if (c=='+'){
            num2 = num;
            num=0;
            if (prev_sign==1||prev_sign==0) {
                summ += num2;
            } else if (prev_sign==2){
                summ -= num2;
            }
            prev_sign = 1;
            cout<<summ<<"; ";
        }
        
        else if (c=='='){
            num2 = num;
            if (prev_sign==1) {
                summ += num2;
            } else if (prev_sign==2){
                summ -= num2;
            }
            cout<<"sum="<<summ<<"\n";
        }
        
        else {
            cout<<"Not required format"<<c<<" - incorrect symbol"<<"\n";
        }
    }
    
}









int main(){
    char fname[] = "deutsch.txt";
    ifstream f(fname);

    string Articles[]={"der", "das", "die", "den", "der", "dem"};
    string buf;
    bool isArticle = false;

    ofstream f2("tmp.txt");   //resulting file - temporary

    while (f>>buf) {
        if (isArticle) {
            buf[0] = toupper(buf[0]);
        }
        clog<<buf<<" ";
        f2<<buf<<" ";     //zapysaty buf into file

        for (int i=0; i<6; i++) {
            if (buf==Articles[i]) {
                isArticle = true;
                break;
            }
        }
    }
    f.close();
    f2.close();

    rename("tmp.txt", fname);
}

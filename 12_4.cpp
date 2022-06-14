//
//  12_4.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

    unsigned n;
    cin>>n;

    int* m = new int[n];  //dynamic array

    for (int i=0; i<n; i++) {
        cout<<"m["<<i<<"]=";
        cin>>m[i];
    }
    char fname[] = "text1.txt";

    fstream f;
    f.open(fname);
    if (f.bad()) {
        cerr<<"Error open file"<<fname;
        delete[] m;
        return 0;
    }

    double* x = new double[n];
    int i=0;
    while (i<n) {
        if (f>>x[i])
            i++;
    }
    f.close();

    if (i==n) {
        fstream g("text2.txt", fstream::out);
        for (int i=0; i<n; i++) {
            double tmp = pow(x[i], m[i]);
            cout<<"t="<<tmp;
            g<<tmp<<", ";
        }
        g.close();
    }

    delete [] x;
    delete [] m;

}

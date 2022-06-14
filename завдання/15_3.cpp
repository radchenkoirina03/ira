//
//  polynom.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include "polynom.hpp"
#include <iostream>
#include <fstream>


Polynom::Polynom(size_t n){
    this->n = n;
    a = new PTYPE[n];  // allocate memory for n coef
}


Polynom::Polynom(size_t n, PTYPE * arr){
    this->n = n;
    a = new PTYPE[n];  // allocate memory for n coef
    
    for (int i=0; i<n; i++) {
        a[i] = arr[i];
    }
}


Polynom::~Polynom(){
    if (n>0) {
        delete [] a;
    }
}


Polynom::Polynom(const Polynom & p){
    this->n = p.n;
    a = new PTYPE[this->n];  // allocate memory for n coef
    
    for (int i=0; i<n; i++) {
        a[i] = p.a[i];
    }
}


Polynom & Polynom::operator=(const Polynom & p){
    delete [] a;
    this->n = p.n;
    a = new PTYPE[this->n];  // allocate memory for n coef
    
    for (int i=0; i<this->n; i++) {
        a[i] = p.a[i];
    }
}


int Polynom::input(){
    if (n==0) {
        std::cout<<"input n=";
        std::cin>>n;
        a = new PTYPE[n];
    }
    for (int i=0; i<n; ++i) {
        std::cout<<"a["<<i<<"]=";
        std::cin>>a[i];
    }
}


void Polynom::output(){
    if (n==0) return;
    if (n==1) {
        std::cout<<((a[0]>=0)?"+":"-");
        std::cout<<a[0];
        return;
    }
    std::cout<<a[n-1]<<"*x^"<<(n-1)<<" ";
    for (int i=n-2; i>0; i--) {
        std::cout<<((a[i]>=0)?"+":"-");
        std::cout<<a[i]<<"*x^"<<i;
    }
    std::cout<<((a[0]>=0)?"+":"-");
    std::cout<<a[0]<<"\n";
}


// p.set(k, b): a[k] = b
int Polynom::set(size_t k, PTYPE b){
    if(k>n-1) return -1;
    a[k] = b;
    return 0;
}


PTYPE Polynom::get(size_t k){
    if(k>n-1) return 0;
    return a[k];
}


int saveFile(const char * fname, const Polynom & P){
    std::fstream fp;
    fp.open(fname, std::ios::in);
    if (fp.bad()) {
        std::cerr<<"Error open file"<<fname;
        return -1;
    }
    else {
        fp<<P.n<<": ";
        for (int i=0; i<P.n; ++i) {
            fp<<P.a[i]<<";";
        }
        fp<<";\n";
        fp.close();
    }
    return 0;
}


int readFile(const char * fname, Polynom & P){
    std::fstream fp;
    fp.open(fname, std::ios::out);
    std::string str;
    if (fp.bad()) {
        std::cerr<<"Error open file"<<fname;
        return -1;
    }
    else {
        fp>>P.n;
        fp>>str;
        
        for (int i=0; i<P.n; ++i) {
            fp>>P.a[i];
        }
        fp.close();
    }
    return 0;
}


int main(){
    
    PTYPE mas[3] = {1, 2, 3};
    Polynom p0(3, mas);
    p0.output();
    
    Polynom p1(3);
    p1.input();
    p1.output();
    
    Polynom p3(p1);
    Polynom p5(4);
    p5=p3;
    p3.set(1, 4.0);
    std::cout<<p3.get(0)<<"\n";
    p3.output();
    
    saveFile("p1.dat", p3);
    Polynom p4(4);
    readFile("p1.dat", p4);
    
    Polynom p[2];
}

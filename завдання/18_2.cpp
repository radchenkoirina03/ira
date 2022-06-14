//
//  STL.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <vector>
#include <list>
#include <fstream>

using namespace std;

int input_vector(vector<int>& x){
    int tmp;
    do {
        cout<<"input value";
        cin>>tmp;
        if (tmp==0) break;
        x.push_back(tmp);
    } while (true);
    return x.size();
}

template <typename T>
void printVector(const vector<T>& v){
    for (int i=0; i<v.size(); i++) {
        std::cout<<v[i]<<"\t";
    }
}


vector<double> input_vector(int d){
    int tmp;
    vector<double> x;
    for (int i=0; i<d; i++) {
        cout<<"input value";
        cin>>tmp;
        x.push_back(tmp);
    }
    return x;
}


double norma(const vector<double>& v){
    vector<double>::const_iterator it = v.begin();
    double s = 0.;
    for (;it!=v.end(); it++) {
        s = s + (*it)*(*it);
    }
    return s;
}


double normaSum(const vector<vector<double>>& v){
    vector<vector<double>>::const_iterator it = v.begin();
    double s = 0.;
    for (;it!=v.end(); it++) {
        s = s + norma(*it);
    }
    return s;
}


template <typename T>
class Poly{
    size_t n;
    list<T> a;
public:
    Poly(){n=0;}
    Poly(int m):n(m){
        a.assign(m, 0);
    }
    Poly(int m, T* arr):n(m){
        a(arr, arr+m);
    }
    
    int input(){
        cout<<"n=";
        cin>>n;
        for (int i=0; i<n; i++) {
            cout<<"a["<<i<<"]=";
            T x;
            cin>>x;
            a.push_back(x);
        }
        return n;
    }
    void output();
    
    Poly add(Poly & x){
        list<T> d;
        auto p1 = a.cbegin();
        auto p2 = x.a.cbegin();
        while (p1!=a.cend() && p2!=x.a.cend()){
            T c = *p1 + *p2;
            d.push_back(c);
            p1++;
            p2++;
        }
        while(p1!=a.cend()){
            d.push_back(*p1);
            p1++;
        }
        while(p2!=x.a.cend()){
            d.push_back(*p2);
            p2++;
        }
        
        Poly r;
        r.n = max(n,a.n);
        r.a = d;
        return r;
        
    }
};


template <class T>
void Poly<T>::output(){
    int i=0;
    for (auto& x: a) {
        cout<<x<<"*x^"<<i<<" + ";
        i++;
    }
}


bool forPair(const pair<int,int>& x, const pair<int,int>& y){
    return (x.first*x.first + x.second*x.second < y.first*y.first + y.second*y.second);
}


class cmp{
    bool operator()(const pair<int,int>& x, const pair<int,int>& y){
        return (x.first*x.first + x.second*x.second < y.first*y.first + y.second*y.second);
    }
};


int main(int argc, char** argv){
//    int n;
//    vector<int> t;
//    vector<int> c;
//    input_vector(t);
//
//    c.push_back(t.at(0));
//    int c1 = t.at(0);
//    for (int i=1; i<t.size(); i++) {
//        c1 = c1 + t[i] - 1;
//        c.push_back(c1);
//    }
//
//    printVector(c);
    
    
    vector<double> v1 = input_vector(3);
    printVector(v1);
    
    vector<vector<double>> vv;
    int d, n;
    cout<<"d=";
    cin>>d;
    cout<<"n=";
    cin>>n;
    for (int i=0; i<n; i++) {
        v1 = input_vector(d);
        vv.push_back(v1);
    }
    cout<<"sum_norm"<<normaSum(vv);
    
    
    fstream f("points.txt");
    string word;
    
    set<pair<int,int>, cmp > pts;
    
    while (f>>word) {
        string::size_type pos1 = word.find("(");
        string::size_type pos2 = word.find(",");
        string::size_type pos3 = word.find(")");
        string buf(pos1+1, pos2-1);
        string buf2(pos2+1, pos3-1);
        int x1, y1;
        istringstream(buf)>>x1;
        istringstream(buf2)>>y1;
        pts.insert(make_pair(x1, y1));
    }
    f.close();
    
    fstream ("points.txt", ios::out);
    
    for (auto& it = pts.cbegin(); it!=pts.cend(); ++it) {
        g<<"("<<it->first<<","<<it->second<<")";
    }
    g.close();
}

//
//  17_2.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <cstring>
#include "human.h"
#include "lecturer.h"

using namespace std;

class Person{
protected:
    char gender;
    string name;
    unsigned age;
public:
    Person(){}
    Person(string str, char c, unsigned n): name(str), gender(c), age(n){}
    
    void input(){
        cout<<"name:";
        cin>>name;
        cout<<"gender:";
        cin>>gender;
        cout<<"age:";
        cin>>age;
    }
    
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"gender:"<<gender<<endl;
        cout<<"age:"<<age<<endl;

    }
    
    friend ostream& operator<<(ostream& ost, const Person& h){
        const char * gen = h.gender?"Male":"Female";
        ost<<h.name<<", "<<h.age<<","<<gen<<endl;
    }
      
};


class Student: virtual public Person{
    int year;
    string group;
    string univ;
public:
    void input(){
        Person::input();
        cout<<"year:";
        cin>>year;
        cout<<"group:";
        cin>>group;
        cout<<"univ:";
        cin>>univ;
    }
    
    void show(){
        Person::show();
        cout<<"year:"<<year<<endl;
        cout<<"group:"<<group<<endl;
        cout<<"univ:"<<univ<<endl;
    }
    
};


class Lecturer: virtual public Person{
    string vuz;
    
public:
    Lecturer(){}
    
    Lecturer(string s, unsigned x, bool g, string V): Person(s, x, g){
        vuz = V;
    }
    
    friend ostream& operator<<(ostream& ost, const Lecturer& h){
        const char* gen = h.gender?"Male":"Female";
        ost<<h.name<<", "<<h.age<<","<<gen<<endl<<h.vuz<<endl;
    }
    
    bool input(){
        string pib;
        unsigned ag;
        bool gend;
        string VU;
        unsigned char kur;
        char grup[3];
        
        cout<<"PIB:";
        cin>>pib;
        cout<<"age:";
        cin>>ag;
        cout<<"Male or Female? M/F?:";
        string sex;
        cin>>sex;
        if (tolower(sex[0])=='f') {
            gend = false;
        } else {
            gend = true;
        }
        cout << "Vuz";
        cin >> VU;

        set(pib, ag, gend, VU);
        return true;
    }
    
    void set(string s, unsigned x, bool g, string V) {
        name = s;
        age = x;
        gender = g;
        VUZ = V;
    }


    void show() {
        cout << *this;
    }
    
};


class Aspirant : public Student, Lecturer {

    float mark;

    string VUZ2;

public:
    Aspirant() {};

    /*Aspirant(string s, unsigned x, bool g, string V, float m){
       set(s,x,g,V,m);
    }*/

    Aspirant(string s, unsigned x, bool g, string V, float m) :Person(s, x, g) {
        set(s, x, g, V, m);
    }


    void set(string s, unsigned x, bool g, string V, float m) {
        name = s;
        age = x;
        gender = g;
        VUZ2 = V;
        mark = m;

    }

    friend ostream& operator<<(ostream& ost, const Aspirant& h) {
        const char* gen = h.gender ? "Male" : "Female";
        ost << h.name << ", " << h.age << "," << gen << " Mark " << h.mark << endl;
    }
};


int main(){
    int N=3;
    Person* m1[10];
    
    for (int i=0; i<N; ++i) {
        cout<<"lecturer or student or aspirant l/s/a?";
        string str;
        cin>>str;
        if (tolower(str[0])=='a') {
            Aspirant* l = new Aspirant();
            l->input();
            
            m1[i]=l;
            
        } else if (tolower(str[0])=='l') {
            Lecturer* l = new Lecturer();
            l->input();
            
            m1[i]=l;
        } else {
            Student* l = new Student();
            l->input();
            
            m1[i]=l;
        }
    }
    for (int i=0; i<N; ++i) {
        cout<<(*m1[i]);
        m1[i]->show();
    }
}

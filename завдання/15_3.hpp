//
//  polynom.hpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#ifndef polynom_hpp
#define polynom_hpp

#include <stdio.h>

/* Визначить клас Поліном, що ініціалізується кiлькiстю елементів ма сиву N та виділяє при цьому пам'ять пiд и дійсних чисел. Створіть методи для заповнення членів цього масиву (через конструктор та окремим методом) та конкретного коефіцієнта за номером, а також метод виведення поліному. Визначить деструктор та копі-конструктор. Який оператор також бажано перевантажити?
    Визначить дружні функції для цього класу для введення та виведення його з консолі у бінарний файл */

// P(n, x) = a_{n-1} * x^{n-1} + a_{n-2} * x^{n-2} + ... + a_0
typedef double PTYPE;

class Polynom{
    size_t n;  //power of polynome -1 (num of koef)
    PTYPE *a;  // a_0, a_1, ...
public:
    Polynom(){n=0;}
    Polynom(size_t n);
    Polynom(size_t n, PTYPE * arr);
    ~Polynom();
    Polynom(const Polynom & p);
    Polynom & operator=(const Polynom & p);
    
    int input();
    void output();
    int set(size_t k, PTYPE b);
    PTYPE get(size_t k);
    
    friend int saveFile(const char * fname, const Polynom & P);
    friend int readFile(const char * fname, Polynom & P);
};

#endif /* polynom_hpp */

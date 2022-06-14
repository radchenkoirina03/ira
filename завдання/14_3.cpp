//
//  14_3.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <fstream>
#include <algorithm>
 

using namespace std;

string punctuation = " .,?!";   //vsi symvoly punktuacii


bool in(char s){
    for (char sym: punctuation) {  //perebor symvoliv zi vsih symvoliv punktuacii
        if (s==sym) {
            return true;   //perevirka chy zbigaetsya symvol s odnym iz symvoliv punktuacii
        }
    }
    return false;   //якщо символ не співпав з одним символом пунктуації, йде повернення що не є символом пунктуації
}


string inversion(const string & s){
    string res = "";
    size_t n = s.size()-1;
    for (int i=0; i<=n; i++) {
        res.push_back(s[n-i]);
    }
    return res;
}


//int reverse1()
//{
//   std::string str = "test string";
//
//   std::reverse(str.begin(), str.end());
//
//   std::cout << str << std::endl;
//
//   return 0;
//}


int main(){

    string line;
    ifstream infile("example.txt");    //відкриваємо файл для зчитування
    ofstream outfile("example_out.txt");    //відкриваємо файл для зчитування

    string ans = "";     //створюємо змінну для запису пунктуації
    string word = "";
    string text;
    char sym;
    if (infile.is_open()) {     //перевірка чи відкрився файл

        while (getline(infile, text, '\n')) {    //прохід по кожному рядку
            for (int i=0; i< text.size(); ++i) {   //по кожному символу рядка
                sym = text[i];
                if (in(sym)) {       //чи є символ знаком пунктуації
//                    ans += sym;     //якщо є, записуємо до відповіді
                    if (word!="") {
                        ans = inversion(word);
                        outfile<<ans;
                    }
                    word = "";
                    outfile<<sym;
                }
                else {
                    cout<<sym;
                    word.push_back(sym);
                }
                cout<<sym;
            }
        }
        infile.close();    //закриття файлу зчитування
    }
//    ofstream outfile ("ans.txt");    //відкриття файлу для запису відповіді
//    outfile << ans << endl;         //запис відповіді
    outfile.close();    //закриття файлу, в який ми записували

    return 0;        //відповідь, що програма працює нормально
}

//
//  14_21.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include<iostream>
 
#include<cstdlib>
 
#include<string>
 
#include<cmath>
 
using namespace std;
 
int main(int argc, char* argv[]) {
    system("chcp 1251 > nul");
    
    string str,result;
 
    cout << "Write line:"; getline(cin, str);
 
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] =='9')
        {
            switch (str[i])
            {
            case '0':
                result += "zero";
                break;
 
            case '1':
                result += "one";
                break;
 
            case '2':
                result += "two";
                break;
 
            case '3':
                result += "three";
                break;
             
            case '4':
                result += "four";
                break;
                    
            case '5':
                result += "five";
                break;
                    
            case '6':
                result += "six";
                break;
                    
            case '7':
                result += "seven";
                break;
                
            case '8':
                result += "eight";
                break;
                
            case '9':
                result += "nine";
                break;
                    
            }
        }
        else
        {
            result += str[i];
        }
 
    }
 
          str.clear();
 
    cout << "Result: " << result << endl;
 
    system("pause > nul");
 
    return EXIT_SUCCESS;
}

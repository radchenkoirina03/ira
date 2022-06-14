//
//  13_14.cpp
//  c++cproject.1
//
//  Created by Iryna Radchenko.
//

#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;


int main()
{
    const size_t N = 80;
    char sent[N];
    const size_t M = 20;
    char word[M];

    std::cout << "Input sentence: " << std::endl;
    std::cin.getline( sent, sizeof( sent ) );

    std::cout << "Input word: " << std::endl;
    std::cin.getline( word, sizeof( word ) );

    size_t n = 0;
    size_t len = std::strlen( word );

    for ( const char *src = sent;
          ( src = std::strstr( src, word ) ) != nullptr;
          src += len )
    {
        n++;
    }

    std::cout << "The number of same words: " << n << std::endl;

    return 0;
}

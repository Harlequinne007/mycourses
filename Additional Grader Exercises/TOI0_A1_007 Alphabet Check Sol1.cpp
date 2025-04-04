// 1 : import library
#include <iostream>
#include <string>

int main() {
    // 2.1 : declare char & input
    std::string alphabet; // using std::string
    std::cin >> alphabet ;

    // 2.2 : check alphabet (lower letter only)
    if  ((alphabet == "a") || (alphabet == "e") || (alphabet == "i") || (alphabet == "o") || (alphabet == "u")) {
        std::cout << "yes" ; 
    }

    else {
        std::cout << "no" ; 
    }

    return 0;
}

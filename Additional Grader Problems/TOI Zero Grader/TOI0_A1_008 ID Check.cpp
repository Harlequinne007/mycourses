// 1 : import library
#include <iostream>
#include <string>

// main fn
int main() {
    // 2.1 : declare var. & input 
    std::string thai_id ;
    std::cin >> thai_id ; 
    
    // 2.2 : check if length is 13
    if (thai_id.length() == 13) {
        std::cout << "yes";
    }

    else {
        std::cout << "no" ;
    }

    // 2.3 : return 0 for no errors
    return 0;
    
}
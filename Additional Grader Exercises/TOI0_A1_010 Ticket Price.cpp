// 1 : import library
#include <iostream>

// 2 : main fn
int main() {
    // 2.1 : declare & input var
    int age ;
    char status ;

    std::cin >> age ;
    std::cin >> status ;

    // 2.2 : check age
    if ( (age < 18) || ( (status == 's') || (status == 'S')) ) {
        std::cout << "20" ;
    }

    else {
        std::cout << "50" ;
    }

    // return 0 for no errors
    return 0 ;
}
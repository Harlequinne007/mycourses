// 1 : import library
#include <iostream>

// 2 :  define main fn 
int main() {
    // 2.1 : declare & input 3 variables
    int num_1 , num_2 , num_3 ; // assign values when input

    std::cin >> num_1 ; // std::endl can use only for input
    std::cin >> num_2 ; 
    std::cin >> num_3 ;
    // if input in same line -> using ... >> ... >> ...

    // 2.2 : if statement -> check maximum (in case two maximum , show only one , so using equal)

    // case 1 : num_1 is max -> print num_1
    if ( (num_1 >= num_2) && (num_1 >= num_3) ) { // Note : 'AND' command in cpp use &&
        std::cout << num_1 << std::endl;
    }

    // case 2 : num_2 is max -> print num_1
    else if ( (num_2 >= num_1) && (num_2 >= num_3) ) {
        std::cout << num_2 << std::endl;
    }

    // case 3 : num_3 is max -> print num_1
    else if ( (num_3 >= num_1) && (num_3 >= num_2) ) {
        std::cout << num_3 << std::endl;
    }

    // 3 ; return 0 for no errors
    return 0 ;
}
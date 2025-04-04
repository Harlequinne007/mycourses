// 1 : import library
#include <iostream>
#include <string>

// 2 : main fn
int main() {
    // declare & input 
    int number;
    char operation ; // for + - x

    std::string num_str = std::string(number) ;
    int reverse_num = int( std::string(num_str[1]) + std::string(num_str[0]) );

    std::cin >> number;
    std::cin >> operation ;

    // if statement
    if (operation == '+') {
        // do operation
        int total_number = number + reverse_num ;
        std::cout << total_number << std::endl;
    }

    else if (operation == '-') {
        // do operation
        int total_number = number - reverse_num ;
        std::cout << total_number << std::endl; 
    }

    else if (operation == '*') {
        // do operation
        int total_number = number * reverse_num ;
        std::cout << total_number << std::endl;
    }
    
    return 0;

}


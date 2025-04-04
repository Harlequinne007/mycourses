// 1 : include library
#include <iostream>

// 2 : define main fn
int main() {
    // 2.1 : declare var & check if divided
    int numerator , denominator ;// declare before input
    std::cin >> numerator ;
    std::cin >> denominator ;

    // 2.2 : check if divided
    if (numerator % denominator == 0){
        // print 'yes' if divided
        std::cout << "yes" << std::endl; // end line
    }

    else {
        // print 'no' for not divided
        std::cout << "no" << std::endl; // end line
    }

    // 2.3 : dont forget to return 0 for no errors
    return 0;

}
// Sol1 : While loop
// import std input/output library
#include <iostream>

// 1 : while loop
int main(){

    /// declare variable money then input
    int money;
    std::cin >> money;
     
    // declare count of coins
    int coin_10 = 0 ; 
    int coin_5 = 0 ;
    int coin_2 = 0 ;
    int coin_1 = 0 ; 
    
    // while loop
    while (money >= 10) {
        // decrease mo0ney by 10 , add count by 1 for each time
        money -= 10;
        coin_10 += 1 ;
    }

    while (money >= 5) {
        // decrease money by 5 , add count by 1 for each time
        money -= 5 ;
        coin_5 += 1 ; 
    }

    while (money >= 2) {
        // decrease money by 2 , add count by 1 for each time
        money -= 2 ;
        coin_2 += 1 ; 
    }

    while (money >= 1) {
        // decrease money by 2 , add count by 1 for each time
        money -= 1 ;
        coin_1 += 1 ; 
    }

    // print out money
    std::cout << "10 = " << coin_10 << std::endl; // dont forget ending line
    std::cout << "5 = " << coin_5 << std::endl;
    std::cout << "2 = " << coin_2 << std::endl;
    std::cout << "1 = " << coin_1 << std::endl;

    
    return 0 ; // no errors

}


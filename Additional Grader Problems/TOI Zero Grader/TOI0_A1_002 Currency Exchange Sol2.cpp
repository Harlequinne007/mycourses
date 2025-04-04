// Sol 2 : using if statement -> using mod instead
/// import std input/output library
# include <iostream>

// 1 : declare and input variables
int main(){ // declare main fn first

    // declare & input variables
    int money;
    int coin_10  = 0 , coin_5 = 0 , coin_2 = 0 , coin_1 = 0 ; // declare all var. to 0 ( 0 at end same as given coin_1 = 0)
    // Note : give them values to 0 because it is initial variables (otherwise it will be garbage alues)
    std::cin >> money ; // input money

    // declare statement
    // Note : in cpp , division will be floored automatically

    if (money >= 10) {
        // add count then decrease money
        coin_10 = money / 10 ; 
        money %= 10 ;
        
    }

    if (money >= 5) {
        // add count then decrease money
        coin_5 = money / 5 ; 
        money %= 5 ;
        
    }

    if (money >= 2) {
        // add count then decrease money
        coin_2 = money / 2 ; 
        money %= 2 ;
        
    }

    if (money >= 1) {
        // add count then decrease money
        coin_1 = money / 1 ; 
        money %= 1 ;
        
    }

    // 3 : print output
    std::cout << "10 = " << coin_10 << std::endl;
    std::cout << "5 = " << coin_5 << std::endl;
    std::cout << "2 = " << coin_2 << std::endl;
    std::cout << "1 = " << coin_1 << std::endl;

    // return 0 for no errors
    return 0;
}
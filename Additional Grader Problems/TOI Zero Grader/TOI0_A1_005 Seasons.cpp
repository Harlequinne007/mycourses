// 1 : import library
#include <iostream>

// 2 : main fn
int main() {
    // 2.1 : define month & date
    int month , date ; 
    std::cin >> month ; 
    std::cin >> date ; 

    // 2.2 : check condition
    if (date >= 21 && date <= 31) {
        // case 1 : month mod 3 equal 0 -> change seasons
        if (month % 3 == 0) {

            if (month == 1 || month == 2 || month == 3) {
                std::cout << "spring" ; // winter -> spring
            }

            else if (month == 4 || month == 5 || month == 6) {
                std::cout << "summer" ; // spring -> summer
            }

            else if (month == 7 || month == 8 || month == 9) {
                std::cout << "fall" ; // summer -> fall
            }

            else if (month == 10 || month == 11 || month == 12) {
                std::cout << "winter" ; // fall -> winter
            }
        }

        else if (month % 3 != 0) {
            if (month == 1 || month == 2 || month == 3) {
                std::cout << "winter" ; 
            }

            else if (month == 4 || month == 5 || month == 6) {
                std::cout << "spring" ; 
            }

            else if (month == 7 || month == 8 || month == 9) {
                std::cout << "summer" ; 
            }

            else if (month == 10 || month == 11 || month == 12) {
                std::cout << "fall" ; 
            }
        }    
    }

    else {

        if (month == 1 || month == 2 || month == 3) {
            std::cout << "winter" ; 
        }

        else if (month == 4 || month == 5 || month == 6) {
            std::cout << "spring" ; 
        }

        else if (month == 7 || month == 8 || month == 9) {
            std::cout << "summer" ; 
        }

        else if (month == 10 || month == 11 || month == 12) {
            std::cout << "fall" ; 
        } 
    }


}

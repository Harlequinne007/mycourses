// 1 : import libraries
#include <iostream>

// 2 : define main fn
int main() {

    // 2.1 : declare var. & input var.
    int homework , midterm_score , final_score ; 

    std::cin >> homework ;
    std::cin >> midterm_score ;
    std::cin >> final_score ;

    // 2.2 : calculate total score
    int total_score = homework + midterm_score + final_score ;

    // 2.3 : check condition -> overall >= 50 and each part >= 50%
    if (total_score >= 50) {
        if (homework >= 5 && midterm_score >= 20 && final_score >= 25) {
            std::cout << "pass" << std::endl;
        }

        else {
            std::cout << "fail" << std::endl;
        }
    }

    else if (total_score < 50) {
        std::cout << "fail" << std::endl;
    }

    // 2.4 : return 0 for no errors
    return 0;
}
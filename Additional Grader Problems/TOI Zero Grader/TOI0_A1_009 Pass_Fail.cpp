// 1 : import libraries
#include <iostream>

// 2 : main fn
int main() {
    // 2.1 : declare var & input var.
    int midterm_score , final_score ;
    std::cin >> midterm_score ;
    std::cin >> final_score ;

    // 2.2 : calculate total score
    int total_score = midterm_score + final_score ;

    // 2.3 : check condition
    if (total_score >= 50) {
        // output total_score & result
        std::cout << total_score << std::endl;
        std::cout << "pass" << std::endl;
    }

    else {
        // output total_score & result
        std::cout << total_score << std::endl;
        std::cout << "fail" << std::endl;
    }

    return 0 ; // for no errors
}
// include library
#include <iostream> 
#include <string> // string library
int main() {
    // string can use index

    // 1 : declare then input string


    // 1.1 : declare var.
    std::string name ;
    std::string surname;

    // 1.2 : input var.
    std::cin >> name; // input var. named Name
    std::cin >> surname;// input var. named Surname

    // define concat as string var.
    std::string concat = name.substr(0,2) + surname.substr(0,2); // like slicing in Python

    // 2 : output string with slicing
    std::cout << "Hello" << " " << name << " " << surname << std::endl; 
    std::cout << concat << std::endl;

    return 0; // no errors
}
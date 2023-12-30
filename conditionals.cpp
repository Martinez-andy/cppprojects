#include <iostream>

int main() {

    // Ask user what age is
    // If user is at least 18 y/o then allowed into site
    // Else, don't let them in
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18 && age < 100) {
        std::cout << "Access granted!\n";
    } 
    else if (age < 0) {
        std::cout << "Stop trolling and put in a real age.\n";
    }
    else if (age >= 100) {
        std::cout << "You old bruh. \n";
    }
    else {
        std::cout << "Access denided. Too young\n";
    }
    return 0;
}
#include <iostream>
#include <cmath>

double input(std::string query);

int main() {
    // Get user input for side one
    double a = input("What is the length of side one: ");
    // Get user input for side two
    double b = input("What is the lenght of side two: ");

    // Find Hypotenuse
    double c = sqrt(pow(a, 2) + pow(b, 2));
    // Print Hypotenuse
    std::cout << "Hypotenuse: " << c << std::endl;
    // Return
    return 0;
}

double input(std::string query) {
    double res;
    std::cout << query;
    std::cin >> res;
    return res;
}
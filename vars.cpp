#include <iostream>

int main() {
    int x = 12;
    int y = 4;
    int sum = x + y;
    double price = 10.99;
    std::cout << price << std::endl;

    // ints are for whole numbers
    // doubles are for decimal points
    // chars are for single characters
    char a = 'A';
    char b = 'B';
    std::cout << a << b << std::endl;

    // Booleans are true or false data types
    bool student = true;
    bool amazon_intern = true;
    bool qualified = false;
    bool power = true;
    std::cout << "Andy is an amazon intern: " << amazon_intern << std::endl;
    std::cout << "Andy is qualified: " << qualified << std::endl;

    // Strings are apparently objects so we use std::string 
    std::string name = "Andy";
    std::cout << "My name is " << name << std::endl;

    std::string food = "My favorite food is pizza";
    std::cout << "My favorite food is " << food << std::endl;

    std::cout << "Hello, " << name << std::endl;

    int age = 21;
    
    std::cout << "You are " << age << " years old" << std::endl;
    return 0;
}
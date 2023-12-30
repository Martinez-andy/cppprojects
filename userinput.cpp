#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "What's your name? ";
    std::getline(std::cin >> std::ws, name); // The getline function allows us to get input with blank spaces

    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old!\n";
    return 0;
}
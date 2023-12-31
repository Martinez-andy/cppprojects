#include <iostream>

char input(std::string arg) {
    char res;
    std::cout << arg;
    std::cin >> res;
    return res;
}

int main() {
    char op;
    std::cout << "What operation? + - * /\n";
    std::cin >> op;

    double x;
    std::cout << "What is the first number: \n";
    std::cin >> x;

    double y;
    std::cout << "What is the second number: \n";
    std::cin >> y;

    switch (op) {
        case '*':
            std::cout << "Result: " << x * y << std::endl;
            break;
        case '/':
            std::cout << "Result: " << x / y << std::endl;
            break;
        case '+':
            std::cout << "Result: " << x + y << std::endl;
            break;
        case '-':
            std::cout << "Result: " << x - y << std::endl;
            break;
        default:
            std::cout << "Enter a valid operation";
    }
    return 0;
}
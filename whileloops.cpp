#include <iostream>
#include <stdio.h>

int main() {
    std::string name;

    while (name.empty()) {
        printf("What is your name?\n");
        std::getline(std::cin, name);
    }
    printf("Hello, %s\n", name.c_str());
    return 0;
}
#include <iostream>
#include <stdio.h>

int main() {
    std::string name;
    printf("Please enter your name: ");
    std::getline(std::cin, name);

    // the str.length(); method method returns the length of the string
    // str.empty() returns a boolean value | Returns true if string is the empty string
    if (name.length() > 12) {
        printf("Your name can't be over 12 characters\n");
    }
    else if (name.empty()) {
        printf("You didn't enter your name!\n");
    }

    else {
        printf("Welcome, %s\n", name.c_str());
    }
    // str.append() adds one string onto another
    name.append("@gmail.com");
    printf("Your user name: %s\n", name.c_str());


    // str.clear() replaces the variable with an empty string
    name.clear();
    printf("Your name is: %s", name.c_str());


    return 0;
}
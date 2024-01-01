#include <iostream>
#include <stdio.h>

int main() {
    std::string name;
    printf("Please enter your name: ");
    std::getline(std::cin, name);

    // the str.length(); method method returns the length of the string
    // str.empty() returns a boolean value | Returns true if string is the empty string

    //Testing string slicing
    std::cout << name[0] << std::endl;
    std::cout << name.at(0) <<std::endl;

    // Insert something into a string
    name.insert(0, "@");
    std::cout << name << std::endl;

    // Find returns the position of any char in a string: returns __ if position not found
    std::cout << "Space is at index " << name.find(' ') << "\n";

    // Erase can eliminate a slice of a string
    name.erase(0, 4);
    std::cout << name << std::endl;

    /*
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
    */

    return 0;
}
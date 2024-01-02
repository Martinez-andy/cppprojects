#include <iostream>
#include <stdio.h>

int main() {
    std::string name;

    do {
        printf("What is your name? ");
        std::getline(std::cin, name);
    } while(name.empty());

    for (int i = 0; i <= name.length(); i++) {
        printf("%c", name[i]);
        printf(" ");
    }
    return 0;
}





/*
int main() {
    for (int i = 3; i >= 0; i--) {
        printf("We are on our iteration %i\n", i);
    }
    return 0;
}
*/
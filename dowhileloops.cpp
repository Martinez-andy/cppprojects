#include <iostream>
#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a positive number: ");
        std::cin >> number;
    } while(number < 0);
    printf("Your number is %i\n", number);
    return 0;
}
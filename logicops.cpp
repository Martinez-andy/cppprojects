#include <iostream>
#include <stdio.h>

int main () {
    // && is the and operator
    // || is the or operator

    int temp;

    std::cout << "Enter the temp: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {
        printf("Temp is between 30 and 0\n");
    }
    else if (temp >= 30) {
        printf("The temp is %i degrees\n", temp);
    }
}
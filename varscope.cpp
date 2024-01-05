#include <iostream>

int myGlobal = 12;
// Avoid using global variables if you can.

int main() {
    int myNum = 1;
    printf("%i, %i\n", myNum, myGlobal);
    return 0;
}
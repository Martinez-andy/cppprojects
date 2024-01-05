#include <iostream>
#include <ctime>

int main () {
    // Learning about random numbers

    srand(time(NULL));

    // Picking a random number between 1 and 6
    int num = (rand() % 6) + 1;

    printf("%i\n", num);
    return 0;
}

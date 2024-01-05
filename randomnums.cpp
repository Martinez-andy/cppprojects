#include <iostream>
#include <ctime>

int getRand(int range);

int main () {
    // Learning about random numbers
    int range;

    printf("What is the upper bound for random range?\n");
    std::cin >> range;
    
    printf("%i\n", getRand(range));
    return 0;
}

int getRand(int range) {
    srand(time(NULL));
    return ((rand() % range) + 1);
}
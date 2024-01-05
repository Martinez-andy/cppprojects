#include <ctime>
#include <iostream>

int main() {
    srand(time(NULL));
    int randNum = (rand() % 5) + 1;

    switch (randNum) {
        case 1: 
            printf("You win cool merch!\n");
            break;
        case 2:
            printf("You win an internship\n");
            break;
        case 3:
            printf("You win a scholarship!\n");
            break;
        case 4:
            printf("You win a scholarship AND an internship!\n");
            break;
        case 5:
            printf("You win financial freedom!\n");
            break;
    }
    return 0;
}
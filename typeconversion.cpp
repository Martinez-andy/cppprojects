#include <iostream>

int main() {
    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;
    std::cout << score << std::endl;
    return 0;
}

// You can force a value to be of another data type by using (datatype) infront of the value or variable
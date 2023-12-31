#include <iostream>

int main() {
    bool hungry = false;
    // Ternary operator
    // Condition ? (if case) : (else case);
    // Do it without the ()
    // () are only needed for a std::cout func b/c of the order of operations
    
    std::cout << (hungry ? "Hello, hungry person!\n" : "Hello, not hungry person!\n");
}




/*


int main() {
    int num = 13;

    num % 2 ? std::cout << "num is odd\n" : std::cout << "num is even\n";
}



int main() {
    Ternary operator ?:

    int grade = 65;

    grade >= 60 ? std::cout << "You passed!\n" : std::cout << "You failed, bruh!\n";

}
*/

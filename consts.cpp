#include <iostream>

int main() {
    const int age = 21;
    const float PI = 3.14159265;
    const int light_speed = 299792458;
    // The const key word says that the variable does not change
    std::cout << "My age is " << age << std::endl;
    std::cout << "The first few digits of pi are " << PI << std::endl;
    std::cout << "The speed of light is " << light_speed << std::endl;
    return 0;
}

// It is convention to name constant variables using all capital letters

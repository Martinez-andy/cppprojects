#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 4;
    double maxi;
    double mini;
    // Finding max and mins
    maxi = std::max(x, y);
    mini = std::min(x, y);

    std::cout << maxi << std::endl;
    std::cout << mini << std::endl;

    // Powers and exponenets

    int z = pow(2, 3);
    std::cout << z << std::endl;

    z = sqrt(9);
    std::cout << z << std::endl;

    z = abs(-3);
    std::cout << z << std::endl;

    z = round(3.14);
    std::cout << z << std::endl;

    z = ceil(3.14);
    std::cout << z << std::endl;

    z = floor(3.14);
    std::cout << z << std::endl;

    

    return 0;
}
#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int > > pairlist_t;
typedef std::string text_t;
typedef int number_t;

// Typedef has been replaced with "using" keyword

using text_t = std::string;
using number_t = int;

int main() {
    number_t x = 12;
    std::cout << x << std::endl;
    return 0;
}
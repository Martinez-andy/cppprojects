#include <iostream>

int main() {
    // foreach loop: usually used for iterable data sets

    int nums[] = {1, 2, 3, 4, 5, 1203, 19023912, 6};
    // For each loop below
    for (int num : nums) {
        printf("%i\n", num);
        printf("I lost my streak!\n");
    }
}
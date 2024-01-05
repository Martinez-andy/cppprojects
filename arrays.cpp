#include <iostream>
#include <stdio.h>

int main() {
    // Reviewing arrays
    std::string carComps[] = {"Tesla", "Toyota", "Ford", "Mustang"};
    int leng = sizeof(carComps) / sizeof(carComps[0]);

    for (int i = 0; i < leng; i++) {
        printf("%s\n", carComps[i].c_str());
    }
    return 0;
}

/*
    To initialize an array we do the following:
        type varName [] = {ARRAY INPUT GOES HERE};

        type above is the type of all the elements in the array
        The brackets indicate that the var is an array
        
    Also, we can use sizeof to determine the size of an array
*/ 

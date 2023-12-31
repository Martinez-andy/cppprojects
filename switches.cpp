#include <iostream>

int main () {
    char grade;
    std::cout << "What grade did you get? ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "You did amazing!\n";
            break;
        case 'B':
            std::cout << "You did really well\n";
            break;
        case 'C':
            std::cout << "You did okay\n";
            break;
        case 'D':
            std::cout << "You did not do well\n";
        case 'F':
            std::cout << "You failed, bruh!\n";
            break;
        default:
            std::cout << "Please enter a valid grade (A-F)\n";
            break;
    }
    return 0;
}








/* Switch functions for months
    int main() {
    Switch statements help us avoid extensive if else statements

    int month;
    std::cout << "Month (1-12): ";
    std::cin >> month;

    switch(month) {
        case 1:
            std::cout<<"It is January!\n";
            break;
        case 2:
            std::cout<<"It is February!\n";
            break;
        case 3:
            std::cout<<"It is March!\n";
            break;
        case 4:
            std::cout<<"It is April!\n";
            break;
        case 5:
            std::cout<<"It is May!\n";
            break;
        case 6:
            std::cout<<"It is June!\n";
            break;
        case 7:
            std::cout<<"It is July!\n";
            break;
        case 8:
            std::cout <<"It is August!\n";
            break;
        case 9:
            std::cout <<"It is September!\n";
            break;
        case 10:
            std::cout <<"It is October!\n";
            break;
        case 11:
            std::cout <<"It is November!\n";
            break;
        case 12:
            std::cout <<"It is December!\n";
            break;
        default:
            std::cout <<"Enter in a valid month (1-12).\n";
            break;
    }    
    return 0;
}
*/
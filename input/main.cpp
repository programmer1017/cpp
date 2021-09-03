#include <iostream>

int main() {
    int usr_number = 3;
    std::cout << "Enter a number of 1 to 10: " << std::endl;

    int usr_input;

    while (1) {
        std::cin >> usr_input;
        if (usr_input == usr_number) {
            std::cout << "You guessed it!" << std::endl;
            break;
        } 
        else {
            std::cout << "Try again!" << std::endl;
        }
    }
    return 0;
}
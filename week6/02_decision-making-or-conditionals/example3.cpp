#include <iostream>

int main() {
    int num = 0;

    // Using if-else-if statement to check if a number is positive, negative, or zero
    if (num > 0) {
        std::cout << "Number is positive." << std::endl;
    } else if (num < 0) {
        std::cout << "Number is negative." << std::endl;
    } else {
        std::cout << "Number is zero." << std::endl;
    }

    return 0;
}

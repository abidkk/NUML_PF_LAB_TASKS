#include <iostream>

int main() {
    char grade = 'B';

    // Using switch statement to print message based on grade
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Well done!" << std::endl;
            break;
        case 'C':
            std::cout << "Passing grade." << std::endl;
            break;
        case 'D':
            std::cout << "Needs improvement." << std::endl;
            break;
        default:
            std::cout << "Invalid grade." << std::endl;
    }

    return 0;
}

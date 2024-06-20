//  Goto statemeente
#include <iostream>

int main() {
    int num;

    // Example of using goto to handle input validation
input:
    std::cout << "Enter a positive number: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
        goto input; // Jump to 'input' label to re-prompt for input
    }

    std::cout << "You entered: " << num << std::endl;

    return 0;
}

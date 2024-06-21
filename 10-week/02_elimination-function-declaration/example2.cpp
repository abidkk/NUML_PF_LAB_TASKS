#include <iostream>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to display a message
void displayMessage(const std::string& msg) {
    std::cout << "Message: " << msg << std::endl;
}

int main() {
    // Calling functions directly without prior declarations
    int number = 5;
    int squared = square(number);

    displayMessage("Hello, functions without declarations!");

    std::cout << "Square of " << number << " is: " << squared << std::endl;

    return 0;
}

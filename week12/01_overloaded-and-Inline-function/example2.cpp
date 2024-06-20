// Inline function

#include <iostream>

// Inline function to calculate the square of a number
inline int square(int num) {
    return num * num;
}

int main() {
    int number = 5;

    // Calling the inline function
    int squared = square(number);

    // Printing the result
    std::cout << "Square of " << number << " is: " << squared << std::endl;

    return 0;
}

// Return Singlee values
#include <iostream>

// Function to calculate the square of a number and return the result
int square(int num) {
    int result = num * num;
    return result;
}

int main() {
    int number = 5;

    // Calling the function and storing the returned value
    int squared = square(number);

    // Printing the result returned by the function
    std::cout << "Square of " << number << " is: " << squared << std::endl;

    return 0;
}

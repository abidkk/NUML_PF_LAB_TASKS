#include <iostream>

int main() {
    double num1;
    std::cout << "Enter a number: ";
    std::cin >> num1;

    // Type casting
    int num2 = static_cast<int>(num1); // Casting double to int

    // Output the original and casted values
    std::cout << "Original number: " << num1 << std::endl;
    std::cout << "After casting to int: " << num2 << std::endl;

    return 0;
}

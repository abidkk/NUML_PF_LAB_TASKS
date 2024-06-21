#include <iostream>

int main() {
    // Input gathering
    int num1;
    std::cout << "Enter an integer: ";
    std::cin >> num1;

    // Type casting
    double num2 = static_cast<double>(num1); // Casting int to double

    // Output the original and casted values
    std::cout << "Original integer: " << num1 << std::endl;
    std::cout << "After casting to double: " << num2 << std::endl;

    return 0;
}

// BY VALUE

#include <iostream>

// Function that takes an integer parameter by value
void square(int num) {
    num = num * num; // Modify the parameter
    std::cout << "Inside function: " << num << "\n"; // Print modified value
}

int main() {
    int number = 5;
    square(number); // Pass 'number' by value
    std::cout << "Outside function: " << number << "\n"; // 'number' remains unchanged
    return 0;
}

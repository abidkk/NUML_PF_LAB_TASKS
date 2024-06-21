// BY REFERENCE
#include <iostream>

// Function that takes an integer parameter by reference
void square(int &num) {
    num = num * num; // Modify the parameter (original variable is modified)
    std::cout << "Inside function: " << num << "\n"; // Print modified value
}

int main() {
    int number = 5;
    square(number); // Pass 'number' by reference
    std::cout << "Outside function: " << number << "\n"; // 'number' is modified
    return 0;
}




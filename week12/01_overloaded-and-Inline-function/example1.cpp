#include <iostream>

// Function to add two integers
int add(int a, int b) {
    std::cout << "Adding two integers: ";
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    std::cout << "Adding three integers: ";
    return a + b + c;
}

// Overloaded function to concatenate two strings
std::string add(const std::string& str1, const std::string& str2) {
    std::cout << "Concatenating two strings: ";
    return str1 + str2;
}

int main() {
    // Calling the overloaded functions
    int sum1 = add(5, 3);
    std::cout << "Result: " << sum1 << std::endl;

    int sum2 = add(2, 4, 6);
    std::cout << "Result: " << sum2 << std::endl;

    std::string concatenated = add("Hello, ", "world!");
    std::cout << "Result: " << concatenated << std::endl;

    return 0;
}


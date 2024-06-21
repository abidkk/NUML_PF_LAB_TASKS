#include <iostream>

// Function declaration with parameters
int add(int a, int b);

int main() {
    int x = 5, y = 3;

    // Function call with arguments
    int sum = add(x, y);

    // Print the result
    std::cout << "Sum of " << x << " and " << y << " is: " << sum << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

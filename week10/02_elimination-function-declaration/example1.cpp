#include <iostream>

// Function definitions without separate declarations
void greet() {
    std::cout << "Hello, welcome to functions in C++!" << std::endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling functions directly without prior declarations
    greet();

    int x = 5, y = 3;
    int sum = add(x, y);

    std::cout << "Sum of " << x << " and " << y << " is: " << sum << std::endl;

    return 0;
}

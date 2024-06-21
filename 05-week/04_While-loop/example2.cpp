#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int factorial = 1;
    int i = 1;

    // Using while loop to calculate factorial of n
    while (i <= n) {
        factorial *= i; // Equivalent to factorial = factorial * i;
        ++i;            // Incrementing i
    }

    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;

    return 0;
}

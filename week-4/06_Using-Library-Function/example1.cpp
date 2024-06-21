#include <iostream>     // Standard Input-Output Library
#include <cmath>        // Math Library

int main() {
    // Using math library functions
    double x = 2.5;

    // Square root function (sqrt)
    double sqrtResult = std::sqrt(x);
    std::cout << "Square root of " << x << " is: " << sqrtResult << std::endl;

    // Power function (pow)
    double powerResult = std::pow(x, 3);
    std::cout << x << " raised to the power of 3 is: " << powerResult << std::endl;

    // Absolute value function (fabs)
    double y = -3.5;
    double absResult = std::fabs(y);
    std::cout << "Absolute value of " << y << " is: " << absResult << std::endl;

    return 0;
}

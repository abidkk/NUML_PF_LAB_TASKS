#include <iostream>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    // Example of operator precedence
    result = a * b + c;  // Multiplication (*) has higher precedence than addition (+)

    std::cout << "Result of a * b + c is: " << result << std::endl;

    result = a + b / c;  // Division (/) has higher precedence than addition (+)

    std::cout << "Result of a + b / c is: " << result << std::endl;

    result = (a + b) / c;  // Parentheses () can be used to change precedence

    std::cout << "Result of (a + b) / c is: " << result << std::endl;

    result = a % b + c * a;  // Modulus (%) and multiplication (*) have higher precedence than addition (+)

    std::cout << "Result of a % b + c * a is: " << result << std::endl;

    return 0;
}

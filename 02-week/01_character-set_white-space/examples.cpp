#include <iostream>

int main() {
    std::cout << "Hello" << ' ' << "World" << '\n'; // space and newline
    std::cout << "Hello\tWorld\n"; // horizontal tab and newline
    std::cout << "Line1\rLine2\n"; // carriage return and newline
    std::cout << "Hello\fWorld\n"; // form feed and newline
    std::cout << "Hello\vWorld\n"; // vertical tab and newline

    return 0;
}

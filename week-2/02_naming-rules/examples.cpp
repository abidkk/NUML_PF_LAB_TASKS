#include <iostream>

int main() {
    // Valid identifiers
    int _value = 10;
    int value2 = 20;
    int Value = 30;
    int my_variable = 40;
    int anotherVariable = 50;

    std::cout << _value << " " << value2 << " " << Value << " " << my_variable << " " << anotherVariable << std::endl;

    // Invalid identifiers (uncomment to see errors)
    // int 2value = 60; // starts with a digit
    // int my-variable = 70; // contains a hyphen
    // int class = 80; // 'class' is a keyword

    return 0;
}

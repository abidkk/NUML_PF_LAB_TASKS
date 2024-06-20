// Nested for loop print a Trianglee

#include <iostream>

int main() {
    int rows = 5;

    // Nested for loop to print a triangle pattern
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}

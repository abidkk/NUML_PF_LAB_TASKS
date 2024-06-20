// Nested for loop print a rectange
#include <iostream>

int main() {
    int rows = 5;
    int cols = 10;

    // Nested for loop to print a rectangle pattern
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}

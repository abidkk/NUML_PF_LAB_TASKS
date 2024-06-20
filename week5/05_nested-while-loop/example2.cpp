#include <iostream>

int main() {
    int rows = 5;  // Number of rows for the triangle
    int i = 1;

    // Outer while loop for rows
    while (i <= rows) {
        int j = 1;

        // Inner while loop for columns
        while (j <= i) {
            std::cout << "* ";
            ++j;
        }
        std::cout << std::endl;
        ++i;
    }

    return 0;
}

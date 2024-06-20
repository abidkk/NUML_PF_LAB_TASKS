#include <iostream>

int main() {
    int n = 5;  // Size of the multiplication table
    int i = 1;

    // Outer while loop for rows
    while (i <= n) {
        int j = 1;

        // Inner while loop for columns
        while (j <= n) {
            std::cout << i * j << "\t";
            ++j;
        }
        std::cout << std::endl;
        ++i;
    }

    return 0;
}

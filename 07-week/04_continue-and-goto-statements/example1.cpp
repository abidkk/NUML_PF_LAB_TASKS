// Continue statement

#include <iostream>

int main() {
    // Example of using continue in a for loop
    for (int i = 1; i <= 5; ++i) {
        if (i == 3) {
            continue; // Skip the rest of the loop body for i == 3
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

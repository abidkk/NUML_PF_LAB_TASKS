#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        // Using switch statement inside a loop to skip odd numbers
        switch (i) {
            case 1:
            case 3:
            case 5:
                continue; // Skip odd numbers
            default:
                std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

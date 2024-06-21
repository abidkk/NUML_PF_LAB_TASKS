#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    // Using for loop to iterate over array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

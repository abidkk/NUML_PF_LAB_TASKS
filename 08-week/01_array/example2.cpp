#include <iostream>

int main() {
    // Example of initializing an array with literal values
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing and printing elements of the array
    std::cout << "Elements of the array 'numbers': ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

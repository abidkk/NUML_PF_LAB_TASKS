#include <iostream>

int main() {
    // Example of initializing an array with zeroes
    int data[7] = {0};  // Initialize all elements to 0

    // Accessing and printing elements of the array
    std::cout << "Elements of the array 'data': ";
    for (int i = 0; i < 7; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

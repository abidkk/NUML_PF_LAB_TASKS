#include <iostream>

// Function to print elements of an integer array using pointers
void printArray(int *arr, int size) {
    std::cout << "Array elements accessed using function and pointers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << *(arr + i) << std::endl;
    }
}

int main() {
    int numbers[] = { 5, 10, 15, 20, 25 };

    // Passing array 'numbers' to function 'printArray'
    printArray(numbers, 5);

    return 0;
}

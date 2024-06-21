#include <iostream>

// Function to print elements of an integer array using pointers
void printArray(int *arr, int size) {
    std::cout << "Array elements accessed using pointers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i << ": " << *(arr + i) << std::endl;
    }
}

int main() {
    int numbers[] = { 5, 10, 15, 20, 25 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Pass the array 'numbers' to the function 'printArray'
    printArray(numbers, size);

    return 0;
}

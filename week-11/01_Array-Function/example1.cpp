#include <iostream>

// Function to print elements of an integer array
void printArray(int arr[], int size) {
    std::cout << "Elements of the array:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Passing array 'numbers' to the function
    printArray(numbers, size);

    return 0;
}

#include <iostream>

int main() {
    int numbers[] = { 10, 20, 30, 40, 50 };

    // Pointer to the first element of the array
    int *ptr = numbers;

    // Accessing array elements using pointer arithmetic
    std::cout << "Array elements accessed using pointers:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}

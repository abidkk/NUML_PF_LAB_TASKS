#include <iostream>

// Function that takes a pointer to an integer and modifies the value
void increment(int *ptr) {
    (*ptr)++; // Increment the value pointed to by ptr
}

int main() {
    int num = 10;

    std::cout << "Initial value of num: " << num << std::endl;

    // Pass the address of num to the increment function
    increment(&num);

    std::cout << "Value of num after incrementing: " << num << std::endl;

    return 0;
}

// POINTER CONSTANT
#include <iostream>

int main() {
    int num = 10;
    int *const ptrConst = &num;  // Pointer constant initialized to point to 'num'

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value pointed to by ptrConst: " << *ptrConst << std::endl;

    // Attempting to change the pointer constant's target
    // ptrConst = nullptr; // This will cause a compilation error

    // Changing the value pointed to by the pointer constant
    *ptrConst = 20; // Valid, since we can modify what it points to

    std::cout << "New value of num after modification: " << num << std::endl;

    return 0;
}

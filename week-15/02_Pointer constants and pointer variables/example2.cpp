// POINTER VARIABLE

#include <iostream>

int main() {
    int num1 = 10, num2 = 20;
    int *ptrVar = &num1;  // Pointer variable initialized to point to 'num1'

    std::cout << "Value of num1: " << num1 << std::endl;
    std::cout << "Value pointed to by ptrVar: " << *ptrVar << std::endl;

    // Change the pointer variable to point to 'num2'
    ptrVar = &num2;

    std::cout << "Value of num2: " << num2 << std::endl;
    std::cout << "New value pointed to by ptrVar: " << *ptrVar << std::endl;

    return 0;
}

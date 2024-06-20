#include <iostream>

int main() {
    int num = 1;

    // Using do-while loop to print numbers from 1 to 5
    do {
        std::cout << num << " ";
        ++num;
    } while (num <= 5);

    std::cout << std::endl;

    return 0;
}

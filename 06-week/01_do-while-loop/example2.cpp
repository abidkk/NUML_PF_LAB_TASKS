#include <iostream>

int main() {
    int num = 1;

    // Using do-while loop to print a table of 5
    do {
        std::cout << num*5 << " ";
        ++num;
    } while (num <= 10);

    std::cout << std::endl;

    return 0;
}

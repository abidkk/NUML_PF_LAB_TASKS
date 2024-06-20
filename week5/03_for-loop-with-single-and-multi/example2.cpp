#include <iostream>

int main() {
    // Using for loop with multiple statements (printing even numbers between 1 to 10)
   int count;
    for (int i = 1, count = 0; i <= 10; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
            ++count;
        }
    }

    std::cout << std::endl;
    std::cout << "Total even numbers: " << count << std::endl;

    return 0;
}

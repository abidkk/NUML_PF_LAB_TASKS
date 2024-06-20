#include <iostream>
#include <string>  // Include the string header for using std::string

int main() {
    // Example of initializing an array of strings
    std::string fruits[3] = {"Apple", "Orange", "Banana"};

    // Accessing and printing elements of the array
    std::cout << "Fruits available:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << fruits[i] << std::endl;
    }

    return 0;
}

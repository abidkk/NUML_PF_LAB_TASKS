// Sorting an Array

#include <iostream>
#include <string>
#include <algorithm> // for std::sort
#include <vector> // for demonstration of a vector of strings

int main() {
    // Example of sorting an array of strings
    std::string fruits[] = {"Apple", "Orange", "Banana", "Pineapple", "Mango"};

    // Sort the array of fruits
    std::sort(std::begin(fruits), std::end(fruits));

    // Print the sorted array
    std::cout << "Sorted fruits:" << std::endl;
    for (const std::string& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    return 0;
}

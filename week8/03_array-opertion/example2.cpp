// Concating string in an Array
#include <iostream>
#include <string>
#include <vector> // for demonstration of a vector of strings

int main() {
    // Example of concatenating strings in an array
    std::string words[] = {"Hello", " ", "world", "!"};
    std::string result;

    // Concatenate strings in the array
    for (const std::string& word : words) {
        result += word;
    }

    // Print the concatenated string
    std::cout << "Concatenated string: " << result << std::endl;

    return 0;
}

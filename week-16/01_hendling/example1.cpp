#include <iostream>
#include <fstream> // Include the file stream library

int main() {
    std::ofstream outputFile; // Output file stream object

    // Open a file named "output.txt" for writing
    outputFile.open("output.txt");

    // Check if the file opened successfully
    if (!outputFile) {
        std::cerr << "Error opening file 'output.txt'" << std::endl;
        return 1;
    }

    // Write to the file
    outputFile << "Hello, World!" << std::endl;
    outputFile << "This is a test file." << std::endl;

    // Close the file
    outputFile.close();

    std::ifstream inputFile; // Input file stream object
    std::string line;

    // Open the same file for reading
    inputFile.open("output.txt");

    // Check if the file opened successfully
    if (!inputFile) {
        std::cerr << "Error opening file 'output.txt'" << std::endl;
        return 1;
    }

    // Read and display each line from the file
    std::cout << "Contents of 'output.txt':" << std::endl;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}

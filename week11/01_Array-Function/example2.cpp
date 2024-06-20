#include <iostream>

// Function to square each element of an integer array
void squareArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= arr[i]; // Square each element in place
    }
}

int main() {
    int data[] = {2, 4, 6, 8, 10};
    int size = sizeof(data) / sizeof(data[0]);

    // Calling function to square elements of 'data' array
    squareArray(data, size);

    // Printing squared elements
    std::cout << "Squared elements of the array:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << data[i];
    }
    std::cout << std::endl;

    return 0;
}

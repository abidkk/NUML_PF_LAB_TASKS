// Return Multiple Vales
#include <iostream>

// Function to find minimum and maximum elements in an array
void findMinMax(const int arr[], int size, int& min, int& max) {
    min = arr[0]; // Initialize min with the first element
    max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }
}

int main() {
    int numbers[] = {5, 2, 8, 1, 6, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int min, max;

    // Calling the function to find min and max
    findMinMax(numbers, size, min, max);

    // Printing the results
    std::cout << "Minimum element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}

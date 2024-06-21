#include <iostream>
#include <string>

int main() {
    // Example of modifying elements in an array of strings
    std::string daysOfWeek[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Modify the element at index 1 (Monday)
    daysOfWeek[1] = "Modified Monday";

    // Accessing and printing elements of the array
    std::cout << "Days of the week:" << std::endl;
    for (int i = 0; i < 7; ++i) {
        std::cout << daysOfWeek[i] << std::endl;
    }

    return 0;
}

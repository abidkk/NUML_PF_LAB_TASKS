#include <iostream>

// Define an enumerated data type named 'Gender' with constants for male and female
enum class Gender {
    Male,
    Female
};

int main() {
    // Declare variables of type 'Gender'
    Gender person1Gender = Gender::Male;
    Gender person2Gender = Gender::Female;

    // Using if-else statements to check gender
    std::cout << "Person 1 is ";
    if (person1Gender == Gender::Male) {
        std::cout << "Male";
    } else {
        std::cout << "Female";
    }
    std::cout << std::endl;

    std::cout << "Person 2 is ";
    if (person2Gender == Gender::Male) {
        std::cout << "Male";
    } else {
        std::cout << "Female";
    }
    std::cout << std::endl;

    return 0;
}

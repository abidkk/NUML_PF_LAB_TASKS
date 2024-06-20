#include <iostream>

int main() {
    int marks = 85;

    // Nested if-else statements to determine grade based on marks
    if (marks >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else {
        if (marks >= 80) {
            std::cout << "Grade: B" << std::endl;
        } else {
            if (marks >= 70) {
                std::cout << "Grade: C" << std::endl;
            } else {
                if (marks >= 60) {
                    std::cout << "Grade: D" << std::endl;
                } else {
                    std::cout << "Grade: F (Fail)" << std::endl;
                }
            }
        }
    }

    return 0;
}

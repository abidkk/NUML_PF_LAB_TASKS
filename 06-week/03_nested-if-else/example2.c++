#include <iostream>

int main() {
    int age = 25;
    bool isStudent = true;

    // Nested if-else statements to calculate ticket price based on age and student status
    if (age < 18) {
        if (isStudent) {
            std::cout << "Ticket price: $5 (Child/student discount)" << std::endl;
        } else {
            std::cout << "Ticket price: $10 (Child)" << std::endl;
        }
    } else {
        if (age >= 65) {
            std::cout << "Ticket price: $7 (Senior discount)" << std::endl;
        } else {
            std::cout << "Ticket price: $15 (Adult)" << std::endl;
        }
    }

    return 0;
}

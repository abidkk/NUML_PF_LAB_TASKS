#include <iostream>

// Define an enumerated data type named 'Day' with named constants for days of the week
enum class Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    // Declare variables of type 'Day'
    Day today = Day::Wednesday;
    Day weekendDay = Day::Saturday;

    // Switch statement to demonstrate enum usage
    std::cout << "Today is ";
    switch (today) {
        case Day::Monday:
            std::cout << "Monday";
            break;
        case Day::Tuesday:
            std::cout << "Tuesday";
            break;
        case Day::Wednesday:
            std::cout << "Wednesday";
            break;
        case Day::Thursday:
            std::cout << "Thursday";
            break;
        case Day::Friday:
            std::cout << "Friday";
            break;
        case Day::Saturday:
            std::cout << "Saturday";
            break;
        case Day::Sunday:
            std::cout << "Sunday";
            break;
    }
    std::cout << std::endl;

    // Output the value of a weekend day
    std::cout << "A weekend day is ";
    switch (weekendDay) {
        case Day::Saturday:
        case Day::Sunday:
            std::cout << "here!";
            break;
        default:
            std::cout << "not here!";
            break;
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <string> // Include for using std::string

// Declare and define a structure 'Employee' in one statement
struct Employee {
    std::string name;
    int age;
    double salary;
} employees[3] = { {"John Doe", 30, 50000.0},
                   {"Jane Smith", 28, 55000.0},
                   {"Michael Johnson", 35, 60000.0} }; // Define an array of 'Employee' structures

int main() {
    // Print information about each employee in the array
    std::cout << "Employee Information:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Employee " << i + 1 << ":" << std::endl;
        std::cout << "Name: " << employees[i].name << std::endl;
        std::cout << "Age: " << employees[i].age << " years" << std::endl;
        std::cout << "Salary: $" << employees[i].salary << std::endl;
        std::cout << std::endl;
    }

    return 0;
}

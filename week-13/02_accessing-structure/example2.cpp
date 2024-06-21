#include <iostream>
#include <string> // Include for using std::string

// Define a structure named 'Employee' to hold information about an employee
struct Employee {
    std::string name;
    int age;
    double salary;
};

int main() {
    // Declare an array of structure variables
    Employee employees[3];

    // Assign values to structure members using dot operator for each employee
    employees[0].name = "John Doe";
    employees[0].age = 30;
    employees[0].salary = 50000.0;

    employees[1].name = "Jane Smith";
    employees[1].age = 28;
    employees[1].salary = 55000.0;

    employees[2].name = "Michael Johnson";
    employees[2].age = 35;
    employees[2].salary = 60000.0;

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

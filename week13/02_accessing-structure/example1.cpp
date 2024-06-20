#include <iostream>
#include <string> // Include for using std::string

// Define a structure named 'Student' to hold information about a student
struct Student {
    std::string name;
    int age;
    char gender;
    double gpa;
};

int main() {
    // Declare a structure variable of type 'Student'
    Student student1;

    // Assign values to structure members using dot operator
    student1.name = "Alice";
    student1.age = 20;
    student1.gender = 'F';
    student1.gpa = 3.8;

    // Print information about the student
    std::cout << "Student Information:" << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << " years" << std::endl;
    std::cout << "Gender: " << student1.gender << std::endl;
    std::cout << "GPA: " << student1.gpa << std::endl;

    return 0;
}

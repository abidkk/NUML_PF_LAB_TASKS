#include <iostream>
#include <string> // Include for using std::string

// Define a structure named 'Person' to hold information about a person
struct Person {
    std::string name;
    int age;
    double height;
};

int main() {
    // Declare structure variables
    Person person1;
    Person person2;

    // Assign values to structure members for person1
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 1.75;

    // Assign values to structure members for person2
    person2.name = "Bob";
    person2.age = 25;
    person2.height = 1.82;

    // Print information about person1
    std::cout << "Person 1:" << std::endl;
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << " years" << std::endl;
    std::cout << "Height: " << person1.height << " meters" << std::endl;

    // Print information about person2
    std::cout << "\nPerson 2:" << std::endl;
    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << " years" << std::endl;
    std::cout << "Height: " << person2.height << " meters" << std::endl;

    return 0;
}

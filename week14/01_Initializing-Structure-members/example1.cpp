#include <iostream>
#include <string> // Include for using std::string

// Define a structure named 'Person' to hold information about a person
struct Person {
    std::string name;
    int age;
    char gender;
    double height;
};

int main() {
    // Example 1: Initializing structure members during declaration
    Person person1 = { "Alice", 30, 'F', 1.75 };

    // Example 2: Initializing structure members individually
    Person person2;
    person2.name = "Bob";
    person2.age = 25;
    person2.gender = 'M';
    person2.height = 1.82;

    // Example 3: Initializing structure members using constructor (if defined)
    Person person3 { "Charlie", 28, 'M', 1.80 }; // Assuming a constructor that initializes all members

    // Print information about person1
    std::cout << "Person 1:" << std::endl;
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << " years" << std::endl;
    std::cout << "Gender: " << person1.gender << std::endl;
    std::cout << "Height: " << person1.height << " meters" << std::endl;
    std::cout << std::endl;

    // Print information about person2
    std::cout << "Person 2:" << std::endl;
    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << " years" << std::endl;
    std::cout << "Gender: " << person2.gender << std::endl;
    std::cout << "Height: " << person2.height << " meters" << std::endl;
    std::cout << std::endl;

    // Print information about person3
    std::cout << "Person 3:" << std::endl;
    std::cout << "Name: " << person3.name << std::endl;
    std::cout << "Age: " << person3.age << " years" << std::endl;
    std::cout << "Gender: " << person3.gender << std::endl;
    std::cout << "Height: " << person3.height << " meters" << std::endl;
    std::cout << std::endl;

    return 0;
}

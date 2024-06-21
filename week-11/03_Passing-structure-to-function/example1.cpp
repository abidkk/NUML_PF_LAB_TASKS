// BY VALUE
#include <iostream>
#include <string>

// Define a structure
struct Person {
    std::string name;
    int age;
};

// Function that takes a structure parameter by value
void printPersonInfo(Person p) {
    std::cout << "Name: " << p.name << ", Age: " << p.age << "\n";
    p.name = "John Doe"; // Modify the structure (local copy)
    p.age = 30;
}

int main() {
    Person person = {"Alice", 25};
    
    printPersonInfo(person); // Pass 'person' by value
    
    // Original 'person' remains unchanged
    std::cout << "Original Person Info: Name: " << person.name << ", Age: " << person.age << "\n";
    
    return 0;
}

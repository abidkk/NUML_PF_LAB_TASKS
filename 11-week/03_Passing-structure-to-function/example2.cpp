// BY REFERENCE

#include <iostream>
#include <string>

// Define a structure
struct Person {
    std::string name;
    int age;
};

// Function that takes a structure parameter by reference
void modifyPersonAge(Person &p) {
    std::cout << "Current age: " << p.age << "\n";
    p.age = 30; // Modify the structure (original variable is modified)
}

int main() {
    Person person = {"Alice", 25};
    
    modifyPersonAge(person); // Pass 'person' by reference
    
    // Original 'person' is modified
    std::cout << "Modified Person Age: " << person.age << "\n";
    
    return 0;
}

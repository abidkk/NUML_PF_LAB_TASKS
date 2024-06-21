#include <iostream>
#include <string> // Include for using std::string

// Define a structure named 'Car' to hold information about a car
struct Car {
    std::string brand;
    std::string model;
    int year;
    double price;
};

int main() {
    // Example: Initializing structure members during declaration
    Car myCar = { "Toyota", "Camry", 2022, 25000.50 };

    // Example: Initializing structure members individually
    Car anotherCar;
    anotherCar.brand = "Honda";
    anotherCar.model = "Civic";
    anotherCar.year = 2020;
    anotherCar.price = 22000.75;

    // Print information about myCar
    std::cout << "My Car:" << std::endl;
    std::cout << "Brand: " << myCar.brand << std::endl;
    std::cout << "Model: " << myCar.model << std::endl;
    std::cout << "Year: " << myCar.year << std::endl;
    std::cout << "Price: $" << myCar.price << std::endl;
    std::cout << std::endl;

    // Print information about anotherCar
    std::cout << "Another Car:" << std::endl;
    std::cout << "Brand: " << anotherCar.brand << std::endl;
    std::cout << "Model: " << anotherCar.model << std::endl;
    std::cout << "Year: " << anotherCar.year << std::endl;
    std::cout << "Price: $" << anotherCar.price << std::endl;
    std::cout << std::endl;

    return 0;
}

#include <iostream>

// Declaration of variables
extern int x;
extern double y;

int main() {
    // Definition of variables
    int x = 20;
    double y = 5.67;

    std::cout << "x: " << x << ", y: " << y << std::endl;

    return 0;
}

#include <iostream>
#include <string> // Include for using std::string

// Define a structure named 'Book' to hold information about a book
struct Book {
    std::string title;
    std::string author;
    int pages;
    double price;
};

int main() {
    // Declare structure variables
    Book book1;
    Book book2;

    // Assign values to structure members for book1
    book1.title = "The Great Gatsby";
    book1.author = "F. Scott Fitzgerald";
    book1.pages = 180;
    book1.price = 12.99;

    // Assign values to structure members for book2
    book2.title = "To Kill a Mockingbird";
    book2.author = "Harper Lee";
    book2.pages = 281;
    book2.price = 15.50;

    // Print information about book1
    std::cout << "Book 1:" << std::endl;
    std::cout << "Title: " << book1.title << std::endl;
    std::cout << "Author: " << book1.author << std::endl;
    std::cout << "Pages: " << book1.pages << std::endl;
    std::cout << "Price: $" << book1.price << std::endl;

    // Print information about book2
    std::cout << "\nBook 2:" << std::endl;
    std::cout << "Title: " << book2.title << std::endl;
    std::cout << "Author: " << book2.author << std::endl;
    std::cout << "Pages: " << book2.pages << std::endl;
    std::cout << "Price: $" << book2.price << std::endl;

    return 0;
}

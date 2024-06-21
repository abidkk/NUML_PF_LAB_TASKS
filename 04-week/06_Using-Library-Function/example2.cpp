#include <iostream>
#include <cstring>      // String Library

int main() {
    // Using string library functions
    char str1[] = "Hello";
    char str2[] = "World";

    // Concatenate strings (strcat)
    strcat(str1, " ");
    strcat(str1, str2);
    std::cout << "Concatenated string: " << str1 << std::endl;

    // String length (strlen)
    int length = strlen(str1);
    std::cout << "Length of the string: " << length << std::endl;

    // String comparison (strcmp)
    char str3[] = "Hello World";
    int result = strcmp(str1, str3);
    if (result == 0) {
        std::cout << "Strings are equal" << std::endl;
    } else {
        std::cout << "Strings are not equal" << std::endl;
    }

    return 0;
}

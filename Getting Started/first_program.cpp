#include <iostream>

// 1. All C++ program must have a main function, this is the starting point for C++ program execution
// 2. All C++ program must have only 1 main() function
int main()
{
    // all statement in C++ must have an ending semi-colon
    int favourite_number;

    std::cout << "Enter your favourite number (1-100): ";
    std::cin >> favourite_number;
    std::cout << "Amazing that's my favourite number too!" << std::endl;
    std::cout << favourite_number << " really this?" << std::endl;

    // returning 0 because the return type for the main function is integer
    return 0;
}
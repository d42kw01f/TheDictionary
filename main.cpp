#include <iostream>

int main() {
    bool exitProgram = false;
    int userInput;
    std::cout << "CSP 2104 Object-Oriented Programming with C++" << std::endl;
    std::cout << "Assignment 1" << std::endl;
    do{
        std::cout << "Enter the number of the task. That you want use.\n" << std::endl;
        std::cout << "===========================================================================================" << std::endl;
        std::cout << "\tTask 01: Load the Dictionary File." << std::endl;
        std::cout << "\tTask 02: Find the Definition." << std::endl;
        std::cout << "\tTask 03: Words with more that three \'Z\' Characters." << std::endl;
        std::cout << "\tTask 04: Add a Word to the Dictionary." << std::endl;
        std::cout << "\tTask 05: Exit" << std::endl;
        std::cout << "===========================================================================================" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Enter the Task Number Here: ";
        std::cin >> userInput;
        if (userInput == 5){
            exitProgram = true;
            std::cout << "Existing from the program." << std::endl;
            std::cout << "Live long and prosper!" << std::endl;
        }
        else {
            exitProgram = false;
        }
        std::cout << "" << std::endl;
    }
    while (!exitProgram);
    return 0;
}

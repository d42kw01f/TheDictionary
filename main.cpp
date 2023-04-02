#include <iostream>
#include <limits>
#include "updateDictionary.h"
#include "loadDictionary.h"
#include "searchWord.h"
#include "findZ.h"
#include "word.h"
#include "validateDictionary.h"

int main() {
    bool exitProgram = false;
    int userInput;
    bool dicEmpty;
    std::vector<Word> FullDict;


    std::cout << "CSP 2104 Object-Oriented Programming with C++" << std::endl;
    std::cout
            << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"
            << std::endl;
    std::cout << "  /$$$$$$                     /$$                                               /$$                       /$$  " << std::endl;
    std::cout << "| $$  \\ $$  /$$$$$$$ /$$$$$$$ /$$  /$$$$$$  /$$$$$$$   /$$$$$$  /$$$$$$/$$$$  /$$$$$$   /$$$$$$$       |_  $$  " << std::endl;
    std::cout << "| $$$$$$$$ /$$_____//$$_____/| $$ /$$__  $$| $$__  $$ /$$__  $$| $$_  $$_  $$|_  $$_/  | $$__  $$        | $$  " << std::endl;
    std::cout << "| $$__  $$|  $$$$$$|  $$$$$$ | $$| $$  \\ $$| $$  \\ $$| $$$$$$$$| $$ \\ $$ \\ $$  | $$    | $$  \\ $$        | $$  " << std::endl;
    std::cout << "| $$  | $$ \\____  $$\\____  $$| $$| $$  | $$| $$  | $$| $$_____/| $$ | $$ | $$  | $$ /$$| $$  | $$        | $$  " << std::endl;
    std::cout << "| $$  | $$ /$$$$$$$//$$$$$$$/| $$|  $$$$$$$| $$  | $$|  $$$$$$$| $$ | $$ | $$  |  $$$$/| $$  | $$       /$$$$$$" << std::endl;
    std::cout << "|__/  |__/|_______/|_______/ |__/ \\____  $$|__/  |__/ \\_______/|__/ |__/ |__/   \\___/  |__/  |__/      |______/" << std::endl;
    std::cout << "                                  /$$  \\ $$                                                                    " << std::endl;
    std::cout << "                                 |  $$$$$$/                                                                    " << std::endl;
    std::cout << "                                  \\______/                                                                     " << std::endl;
    std::cout
            << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;

    // Main message
    do {
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
        std::cout << "Enter the number of the task. That you want use.\n" << std::endl;
        std::cout << "\tTask 1: Load the Dictionary File." << std::endl;
        std::cout << "\tTask 2: Find the Definition." << std::endl;
        std::cout << "\tTask 3: Words with more that three \'Z\' Characters." << std::endl;
        std::cout << "\tTask 4: Add a Word to the Dictionary." << std::endl;
        std::cout << "\tTask 0: Exit" << std::endl;
        std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

        std::cout << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Enter the Task Number Here[Default 1]: ";

        while (!(std::cin >> userInput)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Looks like you have entered a non-numeric character" << std::endl;
            std::cout << "Please enter the correct task number: ";
            std::cout << std::endl;
        }

        // Checking and Validating User Inputs
        switch (userInput) {
            case 0:
                exitProgram = true;
                std::cout << "Existing from the program." << std::endl;
                std::cout << "Live long and prosper!" << std::endl;
                break;
            case 1:
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
                std::cout << std::endl;
                std::cout << "Going to Task 1" << std::endl;
                FullDict = taskPrompt();
                while(checkDictionary(FullDict)){
                    std::cout << "Looks like the dictionary is empty, shall we try it again: " << std::endl;
                    FullDict = taskPrompt();
                }
                break;
            case 2:
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
                std::cout << std::endl;
                std::cout << "Going to Task 2" << std::endl;
                findDefinition(FullDict);
                break;
            case 3:
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
                std::cout << std::endl;
                std::cout << "Going to Task 3" << std::endl;
                findMoreZ(FullDict);
                break;
            case 4:
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
                std::cout << std::endl;
                std::cout << "Going to Task 4" << std::endl;
                addWord(FullDict);
                break;
            default:std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
                std::cout << std::endl;
                std::cout << "Going to Task 1" << std::endl;
                FullDict = taskPrompt();
        }
    }while (!exitProgram);

    return 0;
}


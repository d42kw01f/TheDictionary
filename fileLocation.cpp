#include "fileLocation.h"
#include <iostream>

std::string fileAsker(){

    std::string fullFileName;
    std::cout << "Enter the full path to the file: ";
    std::cin >> fullFileName;

    return fullFileName;
}

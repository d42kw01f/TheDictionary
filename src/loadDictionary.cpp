#include "loadDictionary.h"
#include "fileNotFoundException.h"
#include "fileLocation.h"
#include "fileExtractor.h"
#include "fileExistance.h"
#include "word.h"
#include <iostream>
#include <limits>

std::vector<Word> taskPrompt(){
    std::string fileName = "../Data/dictionary_2023S1.txt";
    std::vector<Word> dic;
    int dictionaryChoice;

    std::cout
            << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
    std::cout << std::endl;
    std::cout << "1. Use your own dictionary" << std::endl;
    std::cout << "2. Use default dictionary[./dictionary_2023s1.txt]" << std::endl;
    std::cout << "Which dictionary would you like to use: ";

    while(!(std::cin >> dictionaryChoice)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Looks like you have entered a non-numeric character" << std::endl;
        std::cout << "Please enter the correct number: ";
    }

    if (dictionaryChoice == 1){
        std::cout << std::endl;
        fileName = fileAsker();
        if (!fileExistChecker(fileName)){
            FileNotFoundError(fileName);
            return dic;
        }
        dic = DictionaryCreator(fileName);
    }
    else{
        dic = DictionaryCreator(fileName);
    }
    return dic;
}

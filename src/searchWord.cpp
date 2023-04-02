#include <iostream>
#include <vector>
#include "word.h"
#include "searchWord.h"
#include "getWordType.h"

void findDefinition(std::vector<Word> &dictionary){
    std::string wordToSearch;
    std::cout << "Enter the word to search: ";
    std::cin >> wordToSearch;

    for (const auto &word :dictionary){
        if (word.name == wordToSearch){
            std::cout << "Name: " << word.name << std::endl;
            std::cout << "Definition: " << word.definition << std::endl;
            std::cout << "Type: " << getTypeDisplayName(word.type) << std::endl;
            return;
        }
    }
    std::cout << "word not found" << std::endl;
}

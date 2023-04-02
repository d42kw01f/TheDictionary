#include "dictionaryPrint.h"
#include <iostream>
#include <vector>
#include "fileExtractor.h"
#include "loadDictionary.h"
#include "getWordType.h"


void printDictionary(const std::vector<Word> &Dictionary){
    int dic_num = 0;
    for (const Word &word : Dictionary) {
        ++dic_num;
        std::cout << "Word: " << dic_num << std::endl;
        std::cout << "\t Name: " << word.name << std::endl;
        std::cout << "\t Definition: " << word.definition << std::endl;
        std::cout << "\t Type: " << getTypeDisplayName(word.type) << std::endl;
        std::cout << std::endl;
    }
}
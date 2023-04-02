#include "validateDictionary.h"
#include <iostream>
#include <vector>
#include "word.h"

bool checkDictionary(std::vector<Word> &dictionary){
    if (dictionary.empty()) {
        std::cout << "The dictionary is empty." << std::endl;
        return true;
    } else {
        return false;
    }
}

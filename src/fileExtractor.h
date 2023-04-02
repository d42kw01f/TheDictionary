#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "word.h"

//struct Word {
//    std::string name;
//    std::string type;
//    std::string definition;
//};
std::vector<Word> DictionaryCreator(std::string &pString);
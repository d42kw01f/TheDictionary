#include "fileExtractor.h"
#include "dictionaryPrint.h"
#include "loadDictionary.h"
#include <iostream>
#include <fstream>
#include <vector>
#include "word.h"

std::vector<Word> DictionaryCreator(std::string &fileName) {
    std::string startLine = "<word>";
    std::string endLine = "</word>";
    std::string readLine;
    std::string str;
    std::string wordName;
    std::string wordDescription;
    std::string wordType;
    std::vector<Word> Dictionary;
    int number_occ = 0;

    std::ifstream wordFile(fileName);
    getline(wordFile, str);
    getline(wordFile, str);
    while (!wordFile.eof()){
        getline(wordFile, readLine);
        size_t pos = readLine.find(startLine);
        if (pos != std::string::npos){
            ++number_occ;
            continue;
        }
        size_t dos = readLine.find(endLine);
        if (dos != std::string::npos) {
            number_occ = 0;
            Word word;
            word.name = wordName;
            word.definition = wordDescription;
            word.type = wordType;
            Dictionary.push_back(word);
            continue;
        }

        if (number_occ == 1){
            wordName = readLine;
            if (!wordName.empty() && wordName[wordName.size() - 1] == '\r')
                wordName.erase(wordName.size() - 1);
            ++number_occ;
        }else if(number_occ == 2) {
            wordDescription = readLine;
            if (!wordDescription.empty() && wordDescription[wordDescription.size() - 1] == '\r')
                wordDescription.erase(wordDescription.size() - 1);
            wordDescription.erase(wordDescription.size() - 1);
            ++number_occ;
        }else if (number_occ == 3){
            wordType = readLine;
            if (!wordType.empty() && wordType[wordType.size() - 1] == '\r')
                wordType.erase(wordType.size() - 1);
        }
    }

    std::cout << std::endl;
    std::cout << "Loaded the dictionary file successfully" << std::endl;
    std::cout << "Do you want to see the entire dictionary[Default N]: ";
    std::string showTheDic;
    std::cin >> showTheDic;
    if (showTheDic == "Y" || showTheDic == "y" || showTheDic == "yes"){
        printDictionary(Dictionary);
    }else{
        return Dictionary;
    }


}


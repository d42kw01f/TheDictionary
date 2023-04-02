#include "updateDictionary.h"
#include <vector>
#include <iostream>
#include <fstream>
#include "word.h"
#include "fileExistance.h"
#include "fileNotFoundException.h"
#include "fileLocation.h"

void addWord(std::vector<Word> &dictionary){
    Word new_word;

    std::cout << "Enter a word to add to the dictionary: ";
    std::cin.ignore();
    std::getline(std::cin, new_word.name);
    std::cout << "Enter the word definition: ";
    std::getline(std::cin, new_word.definition);
    std::cout << "Enter the word type: ";
    std::getline(std::cin, new_word.type);

    auto output_filename = fileAsker();

    bool word_exists = false;
    for (const Word &word : dictionary) {
        if (word.name == new_word.name) {
            word_exists = true;
            break;
        }
    }

    if (word_exists) {
        std::cout << "error: word exists, elevated privileges required to edit existing words" << std::endl;
        return;
    } else {
        dictionary.push_back(new_word);
    }

    output_filename = fileAsker();
    if (!fileExistChecker(output_filename)){
        FileNotFoundError(output_filename);
        output_filename = fileAsker();
    }

    std::ofstream output_file(output_filename);
    if (!output_file.is_open()) {
        std::cerr << "Error: Unable to open the output file " << output_filename << std::endl;
        return;
    }

    for (const Word &word : dictionary) {
        output_file << "<word>" << std::endl;
        output_file << word.name << std::endl;
        output_file << word.definition << std::endl;
        output_file << word.type << std::endl;
        output_file << "</word>" << std::endl;
    }

    output_file.close();
    std::cout << "Updated dictionary saved to " << output_filename << std::endl;
}


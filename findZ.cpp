#include "findZ.h"
#include "word.h"
#include <iostream>

void findMoreZ(std::vector<Word> &dictionary){
    std::cout << "Words with more than three 'z' characters: " << std::endl;
    for (const Word &word : dictionary) {
        int z_count = 0;
        for (char c : word.name) {
            if (c == 'z' || c == 'Z') {
                z_count++;
            }
        }

        if (z_count > 3) {
            std::cout << "Name: " << word.name << std::endl;
            std::cout << "Type: " << word.type << std::endl;
            std::cout << "Definition: " << word.definition << std::endl;
            std::cout << std::endl;
        }
    }
}

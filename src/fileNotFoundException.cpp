#include "fileNotFoundException.h"

void FileNotFoundError(std::string &fileName){
    std::cout << "Error: Unable to open the output file " << fileName << std::endl;
}

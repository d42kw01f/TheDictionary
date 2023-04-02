#include "fileExistance.h"
#include <iostream>
#include <filesystem>


bool fileExistChecker(std::string &fileName){
    if (!std::filesystem::exists(fileName)) {
        return false;
    }
    return true;
}

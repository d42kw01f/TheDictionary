cmake_minimum_required(VERSION 3.26)
project(Assignment)

set(CMAKE_CXX_STANDARD 23)

add_executable(Assignment src/main.cpp src/fileExtractor.cpp src/fileExtractor.h src/loadDictionary.cpp src/loadDictionary.h src/fileLocation.cpp src/fileLocation.h src/fileNotFoundException.cpp src/fileNotFoundException.h src/fileExistance.cpp src/fileExistance.h src/dictionaryPrint.cpp src/dictionaryPrint.h src/word.h src/searchWord.cpp src/searchWord.h src/updateDictionary.cpp src/updateDictionary.h src/findZ.cpp src/findZ.h src/validateDictionary.cpp src/validateDictionary.h src/getWordType.cpp src/getWordType.h)

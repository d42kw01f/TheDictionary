cmake_minimum_required(VERSION 3.26)
project(Assignment)

set(CMAKE_CXX_STANDARD 23)

add_executable(Assignment main.cpp fileExtractor.cpp fileExtractor.h loadDictionary.cpp loadDictionary.h fileLocation.cpp fileLocation.h fileNotFoundException.cpp fileNotFoundException.h fileExistance.cpp fileExistance.h dictionaryPrint.cpp dictionaryPrint.h word.h searchWord.cpp searchWord.h updateDictionary.cpp updateDictionary.h findZ.cpp findZ.h validateDictionary.cpp validateDictionary.h getWordType.cpp getWordType.h)

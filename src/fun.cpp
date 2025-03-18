// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cctype>
#include <cmath>

unsigned int faStr1(const char *str) {
    bool isSymbolInWord = false;
    bool isWordHasNumber = false;
    unsigned int count = 0;

    for (size_t i = 0; i < std::strlen(str); i++) {
        if (str[i] != ' ') {
            if (!isSymbolInWord) {
                isSymbolInWord = true;
            }
            if (!isWordHasNumber) {
                isWordHasNumber = std::isdigit(str[i]);
            }            
        } else {
            if (isSymbolInWord && !isWordHasNumber) {
                count++;
            }
            isSymbolInWord = false;
            isWordHasNumber = false;
        }
    }

    if (isSymbolInWord && !isWordHasNumber) {
        count++;
    }

    return count;
}

bool isUpperLatinLetter(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool isLowerLatinLetter(char c) {
    return (c >= 'a' && c <= 'z');
}

unsigned int faStr2(const char *str) {
    bool isFirstLetterUpperLatin = true;
    bool isOtherLettersLowerLatin = true;
    bool isSymbolInWord = false;
    unsigned int count = 0;

    for (size_t i = 0; i < std::strlen(str); i++) {
        if (str[i] != ' ' && !isSymbolInWord) {
            isSymbolInWord = true;
            isFirstLetterUpperLatin = isUpperLatinLetter(str[i]) == true;
        }
        if (str[i] != ' ' && isSymbolInWord) {
            if (isOtherLettersLowerLatin) {
                isOtherLettersLowerLatin = isLowerLatinLetter(str[i]) == true;
            }
        }
        if (str[i] == ' ' && isSymbolInWord) {
            if (isFirstLetterUpperLatin && isOtherLettersLowerLatin){
                count++;
            }
            isSymbolInWord = false;
            isFirstLetterUpperLatin = true;
            isOtherLettersLowerLatin = true;
        }
    }

    if (isSymbolInWord && isFirstLetterUpperLatin && isOtherLettersLowerLatin) {
        count++;
    }

    return count;
}

unsigned int faStr3(const char *str) {
    bool isSymbolInWord = false;
    int numberOfLettersInWords = 0;
    int numberOfWords = 0;

    for (size_t i = 0; i < std::strlen(str); i++) {
        if (str[i] != ' ' && !isSymbolInWord) {
            isSymbolInWord = true;
            numberOfLettersInWords++;
        }
        if (str[i] != ' ' && isSymbolInWord) {
            numberOfLettersInWords++;
        }
        if (str[i] == ' ' && isSymbolInWord) {
            isSymbolInWord = false;
            numberOfWords++;
        }
    }

    if (isSymbolInWord) {
        numberOfWords++;
    }

    if (numberOfWords == 0) {
        return 0;
    }

    double avgLen = static_cast<double>(numberOfLettersInWords) / numberOfWords;
    return static_cast<unsigned int>(std::round(avgLen));
}

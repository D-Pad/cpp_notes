#include "Algos.h"
#include <vector>
#include <iostream>


void DisplayWord(std::vector<char> characters) {
    for (int i; i < characters.size(); ++i) {
        std::cout << characters.at(i);
    }
    std::cout << std::endl;
}


void AlgoExamples() {

    // 1. Reversing a vector/array
    std::vector<char> charactersOfWord = {'b', 'a', 't'};
    int i = 0;

    std::cout << "Word before reversal: ";
    DisplayWord(charactersOfWord);

    // Divide the length by 2, or else the list will be reversed twice.
    for (i = 0; i < charactersOfWord.size() / 2; ++i) {

        // A temporary value is needed for storing the character
        char tempVal = charactersOfWord.at(i);

        int inx = charactersOfWord.size() - 1 - i;
        charactersOfWord.at(i) = charactersOfWord.at(inx); 
        charactersOfWord.at(inx) = tempVal; 
    }
    
    std::cout << "Word after reversal: ";
    DisplayWord(charactersOfWord);

}


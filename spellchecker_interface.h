#pragma once  // trivia: look up what this means

#include <string>
#include <vector>
using namespace std;

/**
 * Spellchecker Virtual Class
 *
 * Requires implementation of 2 public methods:
 *  isValidWord(string word): given a word, check that it's part
 *      of a dictionary.
 *  guessCorrections(string word): given a word, return a vector
 *      of strings that are possible corrections of the word.
 *      If the word is correct, return empty vector.
 *
 * Note: it is also expected that SpellChecker implementation
 *  expose a constructor that takes in a path to the dictionary it
 *  will use to determine if a word is valid
 */
class SpellCheckerInterface {
    public:
        virtual bool isValidWord(string word) = 0;
        virtual vector<string> guessCorrections(string word) = 0;
};

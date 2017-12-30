#include <iostream>
#include <vector>

#include "fakechecker.h"
using namespace std;

FakeSpellChecker::FakeSpellChecker(string pathToDictionary) {
    pathToDict = pathToDictionary;
    cout << "path given is \"" << pathToDict << "\"\n";
}

bool FakeSpellChecker::isValidWord(string word) {
    cout << "word is \"" << word << "\"!\n";
    return false;
}

vector<string> FakeSpellChecker::guessCorrections(string word) {
    vector<string> result = {"Goblin"};
    return result;
}

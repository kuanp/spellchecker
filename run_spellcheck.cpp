#include <iostream>
#include "fakechecker.h"
#include "mychecker.h"
using namespace std;

const string ENG_DICT_FILE = "Dictionary.txt";

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Need exactly 1 param. "
             << argc - 1  // argc contains the filename too
             << " argument were supplied. \n"
             << "Example: ./run_spellcheck [target_string] \n";
        return 1;
    }

    // construct spellChecker object given a dictionary
    // TODO: substitute with a valid spellchecker
    FakeSpellChecker checker(ENG_DICT_FILE);

    // check the word
    string wordToCheck(argv[1]);
    if (checker.isValidWord(wordToCheck)) {
        cout << "Word \"" << wordToCheck << "\" is a valid word!\n";
    } else {
        cout << "Word \"" << wordToCheck << "\" is a not valid word!\n";
        vector<string> corrections = checker.guessCorrections(wordToCheck);
        if (corrections.size() == 0) {
            cout << "However, no corrections were found \n";
        } else {
            cout << "Suggested corrections: ";
            for (string correction : corrections) {
                cout << "\"" << correction << "\"";
            }
            cout << "\n";
        }
    }

    return 0;
}

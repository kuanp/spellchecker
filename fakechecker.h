#include <string>
#include <vector>
#include "spellchecker.h"
using namespace std;

// implements spellChecker class
class FakeSpellChecker : public SpellChecker {
    public:
        // constructor
        FakeSpellChecker(string pathToDictionary);

        bool isValidWord(string word);
        vector<string> guessCorrections(string word);

    private:
        string pathToDict;  // just stores the path
};

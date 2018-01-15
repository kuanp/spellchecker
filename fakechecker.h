#include <string>
#include <vector>
#include "spellchecker_interface.h"
using namespace std;

// implements spellChecker class
class FakeSpellChecker : public SpellCheckerInterface
{
    public:
        // constructor
        FakeSpellChecker(string pathToDictionary);

        bool isValidWord(string word);
        vector<string> guessCorrections(string word);

    private:
        string pathToDict;  // just stores the path
};

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

bool isWordPresent(const string& sentence, const string& word) {
    // Convert both sentence and word to lowercase for case insensitive comparison
    string sentence_lower = sentence;
    string word_lower = word;
    transform(sentence_lower.begin(), sentence_lower.end(), sentence_lower.begin(), ::tolower);
    transform(word_lower.begin(), word_lower.end(), word_lower.begin(), ::tolower);

    // Create a string stream to parse the sentence
    istringstream iss(sentence_lower);
    string token;
    
    // Iterate through each word in the sentence
    while (iss >> token) {
        // Check if the current token matches the word we are searching for
        if (token == word_lower) {
            return true;  // Word found
        }
    }

    return false;  // Word not found
}

int main() {
    string sentence, word;

    // Read input
    getline(cin, sentence);
    getline(cin, word);

    // Check if word is present in sentence
    if (isWordPresent(sentence, word)) {
        cout << "The word '" << word << "' is present in the given sentence." << endl;
    } else {
        cout << "The word '" << word << "' is not present in the given sentence." << endl;
    }

    return 0;
}
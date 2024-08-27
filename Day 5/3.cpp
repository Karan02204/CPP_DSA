#include <iostream>
using namespace std;
#include <string>

void countVowelsAndConsonants(string& str) {
 int vowelCount = 0;
    int consonantCount = 0;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        } else if (c >= 'a' && c <= 'z') {
            consonantCount++;
        }
    }

    cout << "Vowels: " << vowelCount << std::endl;
    cout << "Consonants: " << consonantCount << std::endl;
}

int main(){
    string str;
    getline(cin , str);
    countVowelsAndConsonants(str);
    return 0;
}
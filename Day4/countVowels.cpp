#include <iostream>
#include <string>

using namespace std;

int countVowels(const string& sentence) {
    int count = 0;
    for (int i=0; i<sentence.length(); i++) {
        char lowercase = tolower(sentence[i]);
        if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int vowels = countVowels(sentence);
    cout << "Number of vowels in the sentence: " << vowels << endl;

    return 0;
}

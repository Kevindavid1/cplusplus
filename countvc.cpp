#include <iostream>
using namespace std;
int main() {
    string input = "The quick brown fox jumps over the lazy dog!";
    int vowels = 0, consonants = 0;

    for (char c : input) {
        if (isalpha(c)) {
            char lower = tolower(c);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "String: " << input << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}

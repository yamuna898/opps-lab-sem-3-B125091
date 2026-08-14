#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int v = 0, c = 0, d = 0, sp = 0;

    // Count character types using standard <cctype> functions
    for (char ch : s) {
        char l = tolower(static_cast<unsigned char>(ch));
        if (string("aeiou").find(l) != string::npos) v++; // Vowel check
        else if (isalpha(l)) c++;                         // Consonant check
        else if (isdigit(l)) d++;                         // Digit check
        else if (isspace(l)) sp++;                        // Space check
    }

    cout << "\nVowels: " << v << "\nConsonants: " << c 
         << "\nDigits: " << d << "\nSpaces: " << sp << "\n";

    return 0;
}
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

// Check integer sign
void check(int num) {
    cout << "The number is " << (num > 0 ? "positive.\n" : num < 0 ? "negative.\n" : "zero.\n");
}

// Check character case
void check(char ch) {
    if (isalpha(ch)) cout << ch << " is an " << (isupper(ch) ? "uppercase" : "lowercase") << " letter.\n";
    else cout << ch << " is not an alphabetic letter.\n";
}

// Search character in array using std::find
void check(const char arr[], int size, char target) {
    bool found = find(arr, arr + size, target) != arr + size;
    cout << target << (found ? " was found" : " was not found") << " in the array.\n";
}

int main() {
    int num, size;
    char ch, target, arr[100];

    cout << "Enter an integer: "; cin >> num; check(num);
    cout << "\nEnter a character: "; cin >> ch; check(ch);

    cout << "\nEnter size of character array: "; cin >> size;
    cout << "Enter " << size << " characters: "; for (int i = 0; i < size; i++) cin >> arr[i];
    cout << "Enter character to search: "; cin >> target;
    check(arr, size, target);
}
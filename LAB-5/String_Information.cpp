#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Length of string
int information(const char str[]) { return strlen(str); }

// Count occurrence of target (up to k characters, defaults to full length)
int information(const char str[], char target, int k = -1) {
    int len = (k < 0) ? strlen(str) : min((size_t)k, strlen(str));
    return count(str, str + len, target);
}

int main() {
    char str[100], target;
    int k;

    cout << "Enter a string: "; cin >> str;
    cout << "\nLength = " << information(str) << endl;

    cout << "\nEnter character to count: "; cin >> target;
    cout << "Total occurrences = " << information(str, target) << endl;

    cout << "\nEnter k: "; cin >> k;
    cout << "Occurrences in first " << k << " positions = " << information(str, target, k) << endl;
}
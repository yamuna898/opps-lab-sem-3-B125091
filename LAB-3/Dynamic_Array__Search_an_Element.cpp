#include <iostream>
using namespace std;

int main() {
    int n, key, pos = -1;
    cout << "Enter size: "; cin >> n;

    int* arr = new int[n]; // Dynamically allocate array
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter key to search: "; cin >> key;

    // Linear search for key
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { pos = i + 1; break; }
    }

    // Output result
    if (pos != -1) cout << "Found at position " << pos << "\n";
    else cout << "Not found\n";

    delete[] arr; // Deallocate memory
    return 0;
}
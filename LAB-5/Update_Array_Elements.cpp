#include <iostream>
using namespace std;

// Generic function template for scalar values (handles int and float)
template <typename T>
void update(T &val, T amt) { val += amt; }

// Overload for array element update
void update(int arr[], int size, int amt) {
    for (int i = 0; i < size; i++) arr[i] += amt;
}

int main() {
    int num, amt, arr[100], n;
    float dec, decAmt;

    cout << "Enter integer & amount: "; cin >> num >> amt;
    cout << "Before: " << num << "\n";
    update(num, amt);
    cout << "After:  " << num << "\n";

    cout << "\nEnter float & amount: "; cin >> dec >> decAmt;
    cout << "Before: " << dec << "\n";
    update(dec, decAmt);
    cout << "After:  " << dec << "\n";

    cout << "\nEnter array size: "; cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter amount to increase: "; cin >> amt;

    cout << "Before: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    update(arr, n, amt);
    cout << "\nAfter:  ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
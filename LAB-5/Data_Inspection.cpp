#include <iostream>
using namespace std;

// Print single value or dereferenced pointer
void inspect(int v) { cout << "Value of integer = " << v << endl; }
void inspect(int* p) { cout << "Value stored at pointer = " << *p << endl; }

// Print array elements via pointer arithmetic
void inspect(int* p, int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << p[i] << " ";
    cout << endl;
}

int main() {
    int v, n, arr[100];

    cout << "Enter an integer: "; cin >> v;
    inspect(v);
    inspect(&v);

    cout << "\nEnter size of array: "; cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    inspect(arr, n);
}
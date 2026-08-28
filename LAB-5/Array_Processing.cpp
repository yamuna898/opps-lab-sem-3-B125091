#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

// Generic sum function for any array type up to k elements
template <typename T>
T process(T arr[], int size, int k = -1) {
    k = (k < 0) ? size : min(k, size);
    return accumulate(arr, arr + k, T(0));
}

int main() {
    int n, k, iA[100];
    float fA[100];

    cout << "Enter size of integer array: "; cin >> n;
    cout << "Enter integer elements: "; for (int i = 0; i < n; i++) cin >> iA[i];
    cout << "Sum of integer array = " << process(iA, n) << endl;

    cout << "\nEnter size of floating-point array: "; cin >> n;
    cout << "Enter floating-point elements: "; for (int i = 0; i < n; i++) cin >> fA[i];
    cout << "Sum of floating-point array = " << process(fA, n) << endl;

    cout << "\nEnter k: "; cin >> k;
    cout << "Sum of first " << k << " elements = " << process(iA, n, k) << endl;
}
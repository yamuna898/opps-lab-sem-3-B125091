#include <iostream>
using namespace std;

void input(int* arr, int n) {
    for (int i = 0; i < n; i++) cin >> arr[i];
}

int getSum(int* a, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += a[i];
    return s;
}

int getMin(int* a, int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] < m) m = a[i];
    return m;
}

int getMax(int* a, int n) {
    int m = a[0];
    for (int i = 1; i < n; i++) if (a[i] > m) m = a[i];
    return m;
}

void display(int s, int min, int max) {
    cout << "\nSum: " << s << "\nMin: " << min << "\nMax: " << max << "\n";
}

int main() {
    int n;
    cout << "Enter size: "; cin >> n;

    int* arr = new int[n]; // Dynamic allocation

    cout << "Enter " << n << " elements: ";
    input(arr, n);
    display(getSum(arr, n), getMin(arr, n), getMax(arr, n));

    delete[] arr; // Free memory
    return 0;
}
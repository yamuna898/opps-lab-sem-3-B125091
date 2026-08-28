#include <iostream>
#include <cmath>
using namespace std;

// Generic function template for scalar values (handles int and float)
template <typename T>
T nearValue(T a, T b) {
    return abs(a) <= abs(b) ? a : b;
}

// Overload for array element closest to zero
int nearValue(int arr[], int size) {
    int nearest = arr[0];
    for (int i = 1; i < size; i++) 
        if (abs(arr[i]) < abs(nearest)) nearest = arr[i];
    return nearest;
}

int main() {
    int a, b, arr[100], n;
    float x, y;

    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Integer nearest to zero = " << nearValue(a, b) << endl;

    cout << "\nEnter two float values: "; cin >> x >> y;
    cout << "Float value nearest to zero = " << nearValue(x, y) << endl;

    cout << "\nEnter size of integer array: "; cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Array element nearest to zero = " << nearValue(arr, n) << endl;
}
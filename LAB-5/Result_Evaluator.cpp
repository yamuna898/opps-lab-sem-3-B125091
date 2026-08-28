#include <iostream>
#include <numeric>
using namespace std;

// Generic template for two numbers or pointer dereferences
template <typename T>
float evaluate(T a, T b) { return (a + b) / 2.0f; }

// Overload for pointer pair
float evaluate(int* a, int* b) { return (*a + *b) / 2.0f; }

// Overload for three integers
float evaluate(int a, int b, int c) { return (a + b + c) / 3.0f; }

// Overload for array average using std::accumulate
float evaluate(int arr[], int size) {
    return size == 0 ? 0 : static_cast<float>(accumulate(arr, arr + size, 0)) / size;
}

int main() {
    int a, b, c, n, arr[100];
    float x, y;

    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Average of two integers = " << evaluate(a, b) << endl;

    cout << "\nEnter three integers: "; cin >> a >> b >> c;
    cout << "Average of three integers = " << evaluate(a, b, c) << endl;

    cout << "\nEnter two floating-point values: "; cin >> x >> y;
    cout << "Average of floating-point values = " << evaluate(x, y) << endl;

    cout << "\nEnter size of integer array: "; cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Average of array elements = " << evaluate(arr, n) << endl;

    cout << "\nEnter two integers for pointer evaluation: "; cin >> a >> b;
    cout << "Average using pointers = " << evaluate(&a, &b) << endl;
}
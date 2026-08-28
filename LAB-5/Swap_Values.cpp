#include <iostream>
#include <utility>
using namespace std;

// Generic template for reference swaps (handles int, float, etc.)
template <typename T>
void swapData(T &a, T &b) { swap(a, b); }

// Pointer swap overload
void swapData(int *a, int *b) { swap(*a, *b); }

int main() {
    int a, b, p, q;
    float x, y;

    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Before: " << a << " " << b << endl;
    swapData(a, b);
    cout << "After:  " << a << " " << b << endl;

    cout << "\nEnter two floats: "; cin >> x >> y;
    cout << "Before: " << x << " " << y << endl;
    swapData(x, y);
    cout << "After:  " << x << " " << y << endl;

    cout << "\nEnter two integers for pointer swap: "; cin >> p >> q;
    cout << "Before: " << p << " " << q << endl;
    swapData(&p, &q);
    cout << "After:  " << p << " " << q << endl;
}
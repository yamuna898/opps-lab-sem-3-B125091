#include <iostream>
using namespace std;

// Overloaded functions using direct expressions
float area(float s) { return s * s; }
float area(float l, float b) { return l * b; }
float area(float r, char) { return 3.14159f * r * r; }

int main() {
    float s, l, b, r;
    
    cout << "Enter side: "; cin >> s;
    cout << "Enter length & breadth: "; cin >> l >> b;
    cout << "Enter radius: "; cin >> r;

    cout << "\nSquare Area = " << area(s)
         << "\nRectangle Area = " << area(l, b)
         << "\nCircle Area = " << area(r, 'c') << endl;
}
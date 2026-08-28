#include <iostream>
using namespace std;

// Generic converter using templates (handles int and float km -> m)
template <typename T>
T convert(T km) { return km * 1000; }

// Overload for meters -> cm
int convert(int m, char) { return m * 100; }

int main() {
    int km, m;
    float fKm;

    cout << "Enter km (int): "; cin >> km;
    cout << "Enter meters: "; cin >> m;
    cout << "Enter km (float): "; cin >> fKm;

    cout << "\n--- Converted Values ---\n"
         << km << " km = " << convert(km) << " meters\n"
         << m << " meters = " << convert(m, 'c') << " centimeters\n"
         << fKm << " km = " << convert(fKm) << " meters\n";
}
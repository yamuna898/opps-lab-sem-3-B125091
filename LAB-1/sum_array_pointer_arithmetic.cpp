#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> *(arr + i);

    for(int i = 0; i < n; i++)
        sum += *(arr + i);

    cout << "Sum of elements: " << sum;

    delete[] arr;
    return 0;
}
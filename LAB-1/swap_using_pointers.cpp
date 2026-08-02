#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swap(&num1, &num2);

    cout << "After swapping:\n";
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2;

    return 0;
}

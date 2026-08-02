#include <iostream>
using namespace std;

int main() {
    int n, key, position = -1;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++)
        if(arr[i] == key) {
            position = i;
            break;
        }

    if(position != -1)
        cout << "Element found at position " << position + 1;
    else
        cout << "Element not found";

    delete[] arr;
    return 0;
}

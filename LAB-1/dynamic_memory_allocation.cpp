#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = (int*)malloc(n * sizeof(int));

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> *(arr + i);

    cout << "\nElements are:\n";
    for(int i = 0; i < n; i++)
        cout << *(arr + i) << " ";

    free(arr);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)cin >> arr[i];

    int largest = arr[0], smallest = arr[0];
    double sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
        sum += arr[i];
    }

    cout << "\nLargest element: " << largest;
    cout << "\nSmallest element: " << smallest;
    cout << "\nAverage: " << sum / n;

    delete[] arr;
    return 0;
}
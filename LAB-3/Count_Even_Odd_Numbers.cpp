#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    int even=0,odd=0;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        cin >> *(arr+i);
        if (*(arr+i)%2==0)even++;
        else odd++;
    }


    cout << "number of even terms: " << even << "\nNumber of odd terms: " << odd;
    delete[] arr;
    return 0;
}

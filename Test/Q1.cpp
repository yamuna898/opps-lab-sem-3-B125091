#include <iostream>
using namespace std;

class Locker {
    int *code;
    int lockerNumber, size;
    bool occupied;

    public:
        Locker(int n, int s) {
            lockerNumber = n;
            occupied = false;
            size = s;
            code = new int[size];

            for (int i = 0; i < size; i++)code[i] = 0;
        }

    void setCode(int arr[]) {
        for (int i = 0; i < size; i++)code[i] = arr[i];
    }

    void setCode(int position, int value) {
        if (position >= 0 && position < size) code[position] = value;
    }

    void display() {
        cout << "Locker Num: " << lockerNumber << endl;
        cout << "Occ: " << occupied << endl;
        cout << "Code: ";

        for (int i = 0; i < size; i++)cout << code[i] << " ";
    }

    //Deconstructor
    ~Locker() {
        delete[] code;
    }
};

int main() {
    int n, size;

    cout << "Enter num of locker: ";
    cin >> n;

    cout << "Enter code len: ";
    cin >> size;

    Locker **lockers = new Locker*[n]; //obj arr

    for (int i = 0; i < n; i++)lockers[i] = new Locker(i + 1, size);

    int *arr = new int[size]; //code dynamic arr

    cout << "Enter complete code: ";
    for (int i = 0; i < size; i++)cin >> arr[i];

    lockers[0]->setCode(arr);
    lockers[0]->setCode(1, 9);

    for (int i = 0; i < n; i++) lockers[i]->display();

    //how to call deconstructor 
    delete[] arr;
    for (int i = 0; i < n; i++)delete lockers[i];
    delete[] lockers;

    return 0;
}
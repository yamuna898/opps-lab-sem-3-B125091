#include <iostream>
using namespace std;

class QueueDisplay {
    int *ids;
    int count, size;

public:
    QueueDisplay(int s) {
        size = s;
        count = 0;
        ids = new int[size];
    }

    void insert(int id) {
        if (count < size) {
            ids[count] = id;
            count++;
        }
    }

    void display() {
        cout << "Queue Size: " << size << endl;
        cout << "Customer IDs: ";

        for (int i = 0; i < count; i++) cout << ids[i] << " ";
    }

    friend void exchange(QueueDisplay &q1, QueueDisplay &q2); //complete queue atribute swap

    ~QueueDisplay() {
        delete[] ids;
    }
};

void exchange(QueueDisplay &q1, QueueDisplay &q2) {
    int tempSize = q1.size;
    q1.size = q2.size;
    q2.size = tempSize;

    int *tempIds = q1.ids;
    q1.ids = q2.ids;
    q2.ids = tempIds;

    int tempCount = q1.count;
    q1.count = q2.count;
    q2.count = tempCount;
}

int main() {
    int n1, n2, id;

    cout << "Enter size of queue 1: ";
    cin >> n1;

    cout << "Enter size of queue 2: ";
    cin >> n2;

    QueueDisplay *q = new QueueDisplay[2]{QueueDisplay(n1), QueueDisplay(n2)}; //array of 2 queue

    cout << "Enter IDs for queue 1:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> id;
        q[0].insert(id);
    }

    cout << "Enter IDs for queue 2:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> id;
        q[1].insert(id);
    }

    cout << "\nBefore Exchange:" << endl;
    q[0].display();
    q[1].display();

    exchange(q[0], q[1]);

    cout << "\nAfter Exchange:" << endl;
    q[0].display();
    q[1].display();

    delete[] q; //deleting

    return 0;
}
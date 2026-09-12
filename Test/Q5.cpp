#include <iostream>
using namespace std;

class Wallet {
    int walletId, size, count;
    float balance;
    float *transactions;

public:
    Wallet(int id, float b, int s) {
        walletId = id;
        balance = b;
        size = s;
        count = 0;
        transactions = new float[size];
    }

    void transaction(float amount) {
        balance += amount;

        if (count < size) {
            transactions[count] = amount;
            count++;
        }
    }

    void transaction(float amount, char type) {
        if (type == 'D' || type == 'd')
            balance += amount;
        else if (type == 'W' || type == 'w')
            balance -= amount;

        if (count < size) {
            if (type == 'W' || type == 'w')
                transactions[count] = -amount;
            else
                transactions[count] = amount;

            count++;
        }
    }

    void display() {
        cout << "Wallet ID: " << walletId << endl;
        cout << "Balance: " << balance << endl;

        cout << "Transactions: ";
        for (int i = 0; i < count; i++)
            cout << transactions[i] << " ";

        cout << endl;
    }

    friend void compareWallet(Wallet w1, Wallet w2);

    ~Wallet() {
        delete[] transactions;
    }
};

void compareWallet(Wallet w1, Wallet w2) {
    if (w1.balance > w2.balance)
        cout << "Wallet " << w1.walletId << " has larger balance." << endl;
    else if (w2.balance > w1.balance)
        cout << "Wallet " << w2.walletId << " has larger balance." << endl;
    else
        cout << "Both wallets have the same balance." << endl;
}

int main() {
    Wallet *w1 = new Wallet(101, 1000, 10);
    Wallet *w2 = new Wallet(102, 1500, 10);

    w1->transaction(500);
    w1->transaction(200, 'W');

    w2->transaction(300, 'D');
    w2->transaction(400, 'W');

    w1->display();
    cout << endl;

    w2->display();
    cout << endl;

    compareWallet(*w1, *w2);

    delete w1;
    delete w2;

    return 0;
}
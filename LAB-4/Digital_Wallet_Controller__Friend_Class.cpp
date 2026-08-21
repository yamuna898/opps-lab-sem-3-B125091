#include <iostream>
#include <string>
using namespace std;

class DigitalWallet {
    string userName, walletStatus;
    double walletBalance;
    friend class WalletManager;
public:
    DigitalWallet(string name, double balance, string status) 
        : userName(name), walletBalance(balance), walletStatus(status) {}
};

class WalletManager {
public:
    void displayDetails(DigitalWallet &w) {
        cout << "User Name: " << w.userName << "\nWallet Balance: Rs. " 
             << w.walletBalance << "\nWallet Status: " << w.walletStatus << endl;
    }
    void addMoney(DigitalWallet &w, double amount) {
        if (w.walletStatus == "Disabled") { cout << "Cannot add money. Wallet is disabled.\n"; return; }
        w.walletBalance += amount;
        cout << "Rs. " << amount << " added successfully.\n";
    }
    void deductMoney(DigitalWallet &w, double amount) {
        if (w.walletStatus == "Disabled") cout << "Cannot deduct money. Wallet is disabled.\n";
        else if (w.walletBalance >= amount) {
            w.walletBalance -= amount;
            cout << "Rs. " << amount << " deducted successfully.\n";
        } else cout << "Insufficient balance.\n";
    }
    void disableWallet(DigitalWallet &w) { w.walletStatus = "Disabled"; cout << "Wallet disabled.\n"; }
    void displayStatus(DigitalWallet &w) { cout << "Current Wallet Status: " << w.walletStatus << endl; }
};

int main() {
    DigitalWallet wallet("Yamuna", 5000, "Active");
    WalletManager manager;

    manager.displayDetails(wallet);
    manager.addMoney(wallet, 1000);
    manager.deductMoney(wallet, 1500);
    manager.displayDetails(wallet);
    manager.disableWallet(wallet);
    manager.displayStatus(wallet);
    manager.deductMoney(wallet, 500);
}
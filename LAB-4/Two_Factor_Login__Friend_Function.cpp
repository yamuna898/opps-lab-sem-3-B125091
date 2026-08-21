#include <iostream>
#include <string>
using namespace std;

class UserAccount {
    string username, accountStatus;
    int loginAttempts;
    friend void checkAccount(const UserAccount &u);

public:
    UserAccount(string user, int attempts, string status)
        : username(user), loginAttempts(attempts), accountStatus(status) {}
};

void checkAccount(const UserAccount &u) {
    cout << "Username: " << u.username << "\nLogin Attempts: " << u.loginAttempts
         << "\nAccount Status: " << u.accountStatus << "\nResult: "
         << (u.loginAttempts >= 3 ? "Account Locked" : "Account Active") << endl;
}

int main() {
    UserAccount user("Yamuna", 2, "Active");
    checkAccount(user);
}
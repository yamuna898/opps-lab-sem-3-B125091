#include <iostream>
using namespace std;

class Instrument {
    int id;
    string name;

private:
    int accessLevel;

public:
    Instrument(int i, string n, int a) {
        id = i;
        name = n;
        accessLevel = a;
    }

    void display() {
        cout << "Instrument ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Access Level: " << accessLevel << endl;
    }

    friend class LabSupervisor;
};

class LabSupervisor {
    public:
        void checkAccess(Instrument *x) {
            cout << "Current Access Level: " << x->accessLevel << endl;
        }

        void modifyAccess(Instrument *x, int level) {
            x->accessLevel = level;
        }
};

int main() {
    Instrument *x = new Instrument(101, "Microscope", 2);
    LabSupervisor s;

    x->display();
    s.checkAccess(x);
    s.modifyAccess(x, 5);

    cout << "\nAfter Modification:" << endl;
    x->display();

    delete x;
    return 0;
}
#include <iostream>
using namespace std;

class Drone {
    int id;
    float battery, hours;

public:
    Drone(int i, float b, float h) {
        id = i;
        battery = b;
        hours = h;
    }

    void update(float b) { //battery update
        battery = b;
    }

    void update(float b, float h) { //battery and flight
        battery = b;
        hours = h;
    }

    void display() {
        cout << "Drone ID: " << id << endl;
        cout << "Battery: " << battery << "%" << endl;
        cout << "Flight Hours: " << hours << endl;
    }

    friend void compareBattery(Drone d1, Drone d2);
};

void compareBattery(Drone d1, Drone d2) {
    if (d1.battery > d2.battery)
        cout << "Drone " << d1.id << " higher battery." << endl;
    else if (d2.battery > d1.battery)
        cout << "Drone " << d2.id << " higher battery." << endl;
    else
        cout << "Both same battery." << endl;
}

int main() {
    Drone *d1 = new Drone(101, 60, 5);
    Drone *d2 = new Drone(102, 80, 7);

    d1->update(70);
    d2->update(90, 8);

    d1->display();

    d2->display();

    compareBattery(*d1, *d2);

    delete d1;
    delete d2;

    return 0;
}
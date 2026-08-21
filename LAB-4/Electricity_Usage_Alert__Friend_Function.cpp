#include <iostream>
#include <string>
using namespace std;

class ElectricMeter {
    int meterNumber, unitsConsumed;
    string consumerName;
    friend void checkUsage(const ElectricMeter &e);

public:
    ElectricMeter(int number, string name, int units)
        : meterNumber(number), consumerName(name), unitsConsumed(units) {}
};

void checkUsage(const ElectricMeter &e) {
    cout << "Meter Number: " << e.meterNumber << "\nConsumer Name: " << e.consumerName 
         << "\nUnits Consumed: " << e.unitsConsumed << "\nUsage Category: "
         << (e.unitsConsumed < 100 ? "Low Usage" : e.unitsConsumed <= 300 ? "Moderate Usage" : "High Usage") << endl;
}

int main() {
    ElectricMeter meter(101, "Yamuna", 250);
    checkUsage(meter);
}
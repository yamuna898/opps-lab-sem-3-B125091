#include <iostream>
#include <string>
using namespace std;

class Printer {
    string printerName;
    int pagesPrinted, inkLevel;
    bool powerStatus;
    friend class PrinterManager;

public:
    Printer(string name, int pages, int ink, bool power)
        : printerName(name), pagesPrinted(pages), inkLevel(ink), powerStatus(power) {}
};

class PrinterManager {
public:
    void displayInfo(const Printer &p) {
        cout << "Printer Name: " << p.printerName << "\nPages Printed: " << p.pagesPrinted
             << "\nInk Level: " << p.inkLevel << "%\nPower Status: "
             << (p.powerStatus ? "ON" : "OFF") << endl;
    }
    void turnOn(Printer &p) { p.powerStatus = true; cout << "Printer turned ON.\n"; }
    void turnOff(Printer &p) { p.powerStatus = false; cout << "Printer turned OFF.\n"; }
    void checkInk(const Printer &p) { cout << "Ink Level: " << p.inkLevel << "%\n"; }
    void resetPageCount(Printer &p) { p.pagesPrinted = 0; cout << "Page count reset.\n"; }
};

int main() {
    Printer printer("HP LaserJet", 250, 70, false);
    PrinterManager manager;

    manager.displayInfo(printer);
    manager.turnOn(printer);
    manager.checkInk(printer);
    manager.resetPageCount(printer);
    manager.turnOff(printer);
    manager.displayInfo(printer);
}
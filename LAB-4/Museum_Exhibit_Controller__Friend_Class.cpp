#include <iostream>
#include <string>
using namespace std;

class Exhibit {
    string exhibitName;
    int exhibitID, visitorCount;
    bool displayStatus;
    friend class MuseumManager;

public:
    Exhibit(string name, int id, int visitors, bool status)
        : exhibitName(name), exhibitID(id), visitorCount(visitors), displayStatus(status) {}
};

class MuseumManager {
public:
    void displayInfo(const Exhibit &e) {
        cout << "Exhibit Name: " << e.exhibitName << "\nExhibit ID: " << e.exhibitID
             << "\nVisitor Count: " << e.visitorCount << "\nDisplay Status: "
             << (e.displayStatus ? "Open" : "Closed") << endl;
    }
    void addVisitors(Exhibit &e, int visitors) {
        e.visitorCount += visitors;
        cout << visitors << " visitors added.\n";
    }
    void resetVisitors(Exhibit &e) { e.visitorCount = 0; cout << "Visitor count reset.\n"; }
    void openExhibit(Exhibit &e) { e.displayStatus = true; cout << "Exhibit opened.\n"; }
    void closeExhibit(Exhibit &e) { e.displayStatus = false; cout << "Exhibit closed.\n"; }
    void checkStatus(const Exhibit &e) {
        cout << (e.displayStatus ? "Exhibit is currently OPEN.\n" : "Exhibit is currently CLOSED.\n");
    }
};

int main() {
    Exhibit exhibit("Ancient Coins", 101, 50, true);
    MuseumManager manager;

    manager.displayInfo(exhibit);
    manager.addVisitors(exhibit, 20);
    manager.checkStatus(exhibit);
    manager.closeExhibit(exhibit);
    manager.resetVisitors(exhibit);
    manager.displayInfo(exhibit);
}
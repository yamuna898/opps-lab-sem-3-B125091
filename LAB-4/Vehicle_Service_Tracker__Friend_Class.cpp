#include <iostream>
#include <string>
using namespace std;

class VehicleService {
    string vehicleNumber, ownerName, serviceDueStatus;
    int lastServiceKilometres;
    friend class ServiceManager;

public:
    VehicleService(string number, string owner, string status, int kilometres)
        : vehicleNumber(number), ownerName(owner), serviceDueStatus(status), lastServiceKilometres(kilometres) {}
};

class ServiceManager {
public:
    void displayInfo(const VehicleService &v) {
        cout << "Vehicle Number: " << v.vehicleNumber << "\nOwner Name: " << v.ownerName
             << "\nService Status: " << v.serviceDueStatus << "\nLast Service Kilometres: "
             << v.lastServiceKilometres << " km" << endl;
    }
    void markServiceCompleted(VehicleService &v) { v.serviceDueStatus = "Completed"; cout << "Service marked as completed.\n"; }
    void updateKilometres(VehicleService &v, int kilometres) { v.lastServiceKilometres = kilometres; cout << "Last service kilometres updated.\n"; }
    void checkService(const VehicleService &v) {
        cout << (v.serviceDueStatus == "Due" ? "Vehicle requires servicing.\n" : "Vehicle does not require servicing.\n");
    }
};

int main() {
    VehicleService vehicle("OD02AB1234", "Yamuna", "Due", 15000);
    ServiceManager manager;

    manager.displayInfo(vehicle);
    manager.checkService(vehicle);
    manager.markServiceCompleted(vehicle);
    manager.updateKilometres(vehicle, 15500);
    manager.checkService(vehicle);
}
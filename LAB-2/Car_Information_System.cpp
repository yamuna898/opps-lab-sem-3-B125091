#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    string carNumber;   // Stores car number
    string brandName;   // Stores brand name
    int modelYear;      // Stores model year

public:
    void acceptDetails(){
        cout << "Enter Car Number: ";
        cin >> carNumber;

        cin.ignore();

        cout << "Enter Brand Name: ";
        getline(cin, brandName);

        cout << "Enter Model Year: ";
        cin >> modelYear;
    }

    void displayDetails(){
        cout << "\nCar Details\n";
        cout << "Car Number: " << carNumber << endl;
        cout << "Brand Name: " << brandName << endl;
        cout << "Model Year: " << modelYear << endl;
    }
};

int main(){
    Car car;    // Create object of Car

    car.acceptDetails();    // Takes input
    car.displayDetails();   // Display details

    return 0;
}
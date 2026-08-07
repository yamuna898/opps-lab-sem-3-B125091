#include <iostream>
using namespace std;

class Temperature{
private:
    float celsius;    // Stores temperature in Celsius
    float fahrenheit; // Stores temperature in Fahrenheit

public:
    void acceptTemperature(){
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    void convert(){
        fahrenheit = (9.0 / 5.0) * celsius + 32;    // Convert Celsius to Fahrenheit
    }

    void display(){
        cout << "\nCelsius: " << celsius << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

int main(){
    Temperature temp;    // Create object

    temp.acceptTemperature();    // Take input
    temp.convert();              // Convert temperature
    temp.display();              // Display result

    return 0;
}
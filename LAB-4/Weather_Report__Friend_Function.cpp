#include <iostream>
#include <string>
using namespace std;

class Weather {
    string cityName, weatherCondition;
    float temperature;
    friend void generateReport(const Weather &w);

public:
    Weather(string city, float temp, string condition)
        : cityName(city), temperature(temp), weatherCondition(condition) {}
};

void generateReport(const Weather &w) {
    cout << "City: " << w.cityName << "\nTemperature: " << w.temperature 
         << " C\nCondition: " << w.weatherCondition << "\nCategory: "
         << (w.temperature > 35 ? "Very Hot" : w.temperature >= 20 ? "Pleasant" : "Cool") << endl;
}

int main() {
    Weather weather("Bhubaneswar", 32.5, "Sunny");
    generateReport(weather);
}
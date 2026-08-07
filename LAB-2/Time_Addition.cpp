#include <iostream>
using namespace std;

class Time{
private:
    int hours;      // Stores hours
    int minutes;    // Stores minutes

public:
    void input(){
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;
    }

    void add(Time t){
        hours += t.hours;       // Add hours
        minutes += t.minutes;   // Add minutes

        if (minutes >= 60){
            hours += minutes / 60;    // Convert extra minutes to hours
            minutes %= 60;            // Keep minutes below 60
        }
    }

    void display(){
        cout << "\nResult: " << hours << " hours "
             << minutes << " minutes" << endl;
    }
};

int main(){
    Time t1, t2;    // Create two objects

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    t1.add(t2);     // Add second time to first time
    t1.display();   // Display result

    return 0;
}
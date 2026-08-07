#include <iostream>
using namespace std;

class Square{
private:
    float side;    // Stores side length

public:
    void readSide(){
        cout << "Enter side: ";
        cin >> side;
    }

    float calculateArea(){
        return side * side;    // Calculate area
    }

    float calculatePerimeter(){
        return 4 * side;    // Calculate perimeter
    }

    void displayResults(){
        cout << "\nArea: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main(){
    Square square;    // Create object

    square.readSide();          // Take input
    square.displayResults();    // Display results

    return 0;
}
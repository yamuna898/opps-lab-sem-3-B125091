#include <iostream>
#include <string>
using namespace std;

class MovieTicket{
private:
    string movieName;    // Stores movie name
    float ticketPrice;   // Stores ticket price
    int numberOfTickets; // Stores number of tickets

public:
    void acceptDetails(){
        cout << "Enter Movie Name: ";
        getline(cin, movieName);

        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;
    }

    float calculateCost(){
        return ticketPrice * numberOfTickets;    // Calculate total cost
    }

    void display(){
        cout << "\nBooking Summary\n";
        cout << "Movie Name: " << movieName << endl;
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Number of Tickets: " << numberOfTickets << endl;
        cout << "Total Cost: " << calculateCost() << endl;
    }
};

int main(){
    MovieTicket ticket;    // Create object

    ticket.acceptDetails();    // Take booking details
    ticket.display();          // Display booking summary

    return 0;
}
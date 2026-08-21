#include <iostream>
#include <string>
using namespace std;

class EventParticipant {
    string participantName, registrationStatus;
    int age;
    friend void verifyParticipant(const EventParticipant &p);

public:
    EventParticipant(string name, int a, string status)
        : participantName(name), age(a), registrationStatus(status) {}
};

void verifyParticipant(const EventParticipant &p) {
    cout << "Participant Name: " << p.participantName << "\nAge: " << p.age 
         << "\nRegistration Status: " << p.registrationStatus << "\nResult: "
         << (p.age >= 18 && p.registrationStatus == "Active" ? "Eligible" : "Not Eligible") << endl;
}

int main() {
    EventParticipant participant("Yamuna", 19, "Active");
    verifyParticipant(participant);
}
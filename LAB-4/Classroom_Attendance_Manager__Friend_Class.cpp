#include <iostream>
#include <string>
using namespace std;

class Classroom {
    string className, attendanceStatus;
    int totalStudents, presentStudents;
    friend class AttendanceManager;

public:
    Classroom(string name, int total, int present, string status)
        : className(name), totalStudents(total), presentStudents(present), attendanceStatus(status) {}
};

class AttendanceManager {
public:
    void displayInfo(const Classroom &c) {
        cout << "Class Name: " << c.className << "\nTotal Students: " << c.totalStudents
             << "\nPresent Students: " << c.presentStudents << "\nAttendance Status: " << c.attendanceStatus << endl;
    }
    void updatePresentStudents(Classroom &c, int present) {
        if (present >= 0 && present <= c.totalStudents) {
            c.presentStudents = present;
            cout << "Present student count updated.\n";
        } else cout << "Invalid present student count.\n";
    }
    void markAttendanceCompleted(Classroom &c) {
        c.attendanceStatus = "Completed";
        cout << "Attendance marked as completed.\n";
    }
    void displayAttendanceStatus(const Classroom &c) {
        cout << (c.attendanceStatus == "Completed" ? "Attendance has been completed.\n" : "Attendance has not been completed.\n");
    }
    void calculateAbsentStudents(const Classroom &c) {
        cout << "Absent Students: " << (c.totalStudents - c.presentStudents) << endl;
    }
};

int main() {
    Classroom classroom("CSE B1", 60, 52, "Pending");
    AttendanceManager manager;

    manager.displayInfo(classroom);
    manager.calculateAbsentStudents(classroom);
    manager.updatePresentStudents(classroom, 55);
    manager.calculateAbsentStudents(classroom);
    manager.markAttendanceCompleted(classroom);
    manager.displayAttendanceStatus(classroom);
}
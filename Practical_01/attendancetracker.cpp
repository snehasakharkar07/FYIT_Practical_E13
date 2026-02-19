#include <iostream>
using namespace std;

class Attendance {
private:
    string name;
    int totalLectures;
    int attendedLectures;
    float percentage;

public:
    void input() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Total Lectures Conducted: ";
        cin >> totalLectures;

        cout << "Enter Lectures Attended: ";
        cin >> attendedLectures;
    }

    void calculate() {
        percentage = (attendedLectures * 100.0) / totalLectures;
    }

    void display() {
        cout << "\n--- Attendance Report ---";
        cout << "\nName: " << name;
        cout << "\nAttendance Percentage: " << percentage << "%";

        if (percentage >= 75)
            cout << "\nStatus: Eligible for Exam";
        else
            cout << "\nStatus: Not Eligible for Exam";
    }
};

int main() {
    Attendance a;
    a.input();
    a.calculate();
    a.display();
    return 0;
}

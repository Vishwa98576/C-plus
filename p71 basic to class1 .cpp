#include<iostream>
using namespace std;
class TimeConverter {
private:
    int hours;
    int minutes;

public:
    TimeConverter(int h) : hours(h), minutes(0) {}

    void convertToMinutes() {
        minutes = hours * 60;
    }

    void display() const {
        cout << hours << " hour(s) is equal to " << minutes << " minute(s)." << endl;
    }
};

int main() {
    int hoursInput;
    cout << "Enter the number of hours: ";
    cin >> hoursInput;

    TimeConverter time(hoursInput);

    time.convertToMinutes();

    time.display();

    return 0;
}


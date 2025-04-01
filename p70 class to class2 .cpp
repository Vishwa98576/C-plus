#include <iostream>
using namespace std;

class Student {
private:
    int e, h;

public:
    void setData(int english, int history) {
        e = english;
        h = history;
    }
    void printData() {
        cout << "English Marks: " << e << ", History Marks: " << h << endl;
    }

    
    int getTotal() {
        return e + h;
    }
};

class MarksTotal {
private:
    int total;

public:
    void operator=(Student s1) {
        total = s1.getTotal();
    }
    void printTotal() {
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Student s1;
    MarksTotal mt;

    s1.setData(22, 19);

    s1.printData();

    mt = s1;

    mt.printTotal();

    return 0;
}

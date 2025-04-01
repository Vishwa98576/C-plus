#include <iostream>
using namespace std;

class inventory1 {
    int ino, qty;
    float rate;

public:
    inventory1(int n, int q, float r) {
        ino = n;
        qty = q;
        rate = r;
    }

    inventory1() : ino(0), qty(0), rate(0.0f) {
        cout << "\n Inventory1's Object Created";
    }

    int getino() {
        return ino;
    }

    float getamt() {
        return qty * rate;
    }

    void display() {
        cout << endl
             << "ino = " << ino << " qty = " << qty << " rate = " << rate;
    }
};

class inventory2 {
    int ino;
    float amount;

public:
    void operator=(inventory1 I) {
        ino = I.getino();
        amount = I.getamt();
    }

    void display() {
        cout << endl
             << "ino = " << ino << " amount = " << amount;
    }
};

int main() {
    inventory1 I1(1001, 30, 75);
    inventory2 I2;
    I2 = I1; 
    I1.display();
    I2.display();
    cin.get(); 
    return 0;
}

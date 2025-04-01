#include<iostream>
using namespace std;
class distanceconvertor{
	private:
		int kms;
		int metres;
	public:
	distanceconvertor(int kms) : kms(kms),metres(0) {}
	
	void converttometres() {
		metres = kms * 1000;
	}
	void display() const {
        cout << kms << " km(s) is equal to " << metres << " metre(s)." << endl;
    }
};

int main() {
    int kmsInput;
    cout << "Enter the number kms: ";
    cin >> kmsInput;

   distanceconvertor distance(kmsInput);

    distance.converttometres();

    distance.display();

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    int year;

public:
  
    Car(string b, int y) {
        brand = b;
        year = y;
    }

  
    void displayInfo() {
        cout << "Марка: " << brand << endl;
        cout << "Година: " << year << endl;
    }

  
    void startEngine() {
        cout << brand << " стартира двигателя." << endl;
    }
};

int main() {
    Car car1("Toyota", 2020);

    car1.displayInfo();
    car1.startEngine();

    return 0;
}

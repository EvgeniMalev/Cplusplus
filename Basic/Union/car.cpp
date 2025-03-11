#include <iostream>
#include <cstring>

using namespace std;

union CarSpecs {
    int year;
    float engineCC;
    double powerKW;
    char fuelType;
};

struct Car {
    char model[50];
    CarSpecs specs;
    char type;
};

void displayCar(const Car &car) {
    cout << "Car Model: " << car.model << endl;
    switch (car.type) {
        case 'Y': 
            cout << "Manufacturing Year: " << car.specs.year << endl;
            break;
        case 'C': 
            cout << "Engine Capacity: " << car.specs.engineCC << " CC" << endl;
            break;
        case 'P': 
            cout << "Power Output: " << car.specs.powerKW << " kW" << endl;
            break;
        case 'F': 
            cout << "Fuel Type: " << (car.specs.fuelType == 'P' ? "Petrol" : 
                                       car.specs.fuelType == 'D' ? "Diesel" : 
                                       car.specs.fuelType == 'E' ? "Electric" : "Unknown") << endl;
            break;
        default:
            cout << "Unknown Data Type" << endl;
    }
}

int main() {
    Car car1;
    strcpy(car1.model, "Tesla Model S");

    car1.specs.year = 2022;
    car1.type = 'Y';
    displayCar(car1);

    car1.specs.engineCC = 2998.5f;
    car1.type = 'C';
    displayCar(car1);

    car1.specs.powerKW = 450.2;
    car1.type = 'P';
    displayCar(car1);

    car1.specs.fuelType = 'E';
    car1.type = 'F';
    displayCar(car1);

    return 0;
}

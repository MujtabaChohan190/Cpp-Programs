#include <iostream>

using namespace std;

// Base class
class Vehicle {
public:
    void fuelAmount() {
        cout << "Checking fuel amount..." << endl;
    }

    void capacity() {
        cout << "Checking vehicle capacity..." << endl;
    }

    void applyBrakes() {
        cout << "Applying brakes..." << endl;
    }
};

// Derived class for Bus
class Bus : public Vehicle {
public:
    void busSpecificFunction() {
        cout << "This is a function specific to the Bus class." << endl;
    }
};

// Derived class for Car
class Car : public Vehicle {
public:
    void carSpecificFunction() {
        cout << "This is a function specific to the Car class." << endl;
    }
};

// Derived class for Truck
class Truck : public Vehicle {
public:
    void truckSpecificFunction() {
        cout << "This is a function specific to the Truck class." << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Bus myBus;
    Car myCar;
    Truck myTruck;

    cout << "Bus actions:" << endl;
    myBus.fuelAmount();
    myBus.capacity();
    myBus.applyBrakes();
    myBus.busSpecificFunction();

    cout << "\nCar actions:" << endl;
    myCar.fuelAmount();
    myCar.capacity();
    myCar.applyBrakes();
    myCar.carSpecificFunction();

    cout << "\nTruck actions:" << endl;
    myTruck.fuelAmount();
    myTruck.capacity();
    myTruck.applyBrakes();
    myTruck.truckSpecificFunction();

    return 0;
}

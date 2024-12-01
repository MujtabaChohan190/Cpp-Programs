#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    // Constructor to initialize brand and year
    Vehicle(string b, int y) {
        brand = b;
        year = y;
    }

    void fuelAmount() {
        cout << "Checking fuel amount..." << endl;
    }

    void capacity() {
        cout << "Checking vehicle capacity..." << endl;
    }

    void applyBrakes() {
        cout << "Applying brakes..." << endl;
    }

    void displayInfo() {
        cout << "Vehicle Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class for Bus
class Bus : public Vehicle {
    int passengerCapacity;

public:
    // Constructor to initialize Bus-specific properties
    Bus(string b, int y, int capacity) : Vehicle(b, y) {
        passengerCapacity = capacity;
    }

    void busSpecificFunction() {
        cout << "This is a function specific to the Bus class." << endl;
        cout << "Passenger Capacity: " << passengerCapacity << endl;
    }
};

// Derived class for Car
class Car : public Vehicle {
    int numDoors;

public:
    // Constructor to initialize Car-specific properties
    Car(string b, int y, int doors) : Vehicle(b, y) {
        numDoors = doors;
    }

    void carSpecificFunction() {
        cout << "This is a function specific to the Car class." << endl;
        cout << "Number of Doors: " << numDoors << endl;
    }
};

// Derived class for Truck
class Truck : public Vehicle {
    double maxLoad;

public:
    // Constructor to initialize Truck-specific properties
    Truck(string b, int y, double load) : Vehicle(b, y) {
        maxLoad = load;
    }

    void truckSpecificFunction() {
        cout << "This is a function specific to the Truck class." << endl;
        cout << "Maximum Load: " << maxLoad << " tons" << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Bus myBus("Volvo", 2020, 50);
    Car myCar("Toyota", 2021, 4);
    Truck myTruck("Ford", 2019, 10.5);

    cout << "Bus actions:" << endl;
    myBus.displayInfo();
    myBus.fuelAmount();
    myBus.capacity();
    myBus.applyBrakes();
    myBus.busSpecificFunction();

    cout << "\nCar actions:" << endl;
    myCar.displayInfo();
    myCar.fuelAmount();
    myCar.capacity();
    myCar.applyBrakes();
    myCar.carSpecificFunction();

    cout << "\nTruck actions:" << endl;
    myTruck.displayInfo();
    myTruck.fuelAmount();
    myTruck.capacity();
    myTruck.applyBrakes();
    myTruck.truckSpecificFunction();

    return 0;
}

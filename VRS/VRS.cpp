#include "headers.h"

enum VehicleStatus{AVAILABLE,RENTED,MAINTENANCE};

class Vehicle
{
    int id;
    string brand;
    int rentPerDay;
    VehicleStatus status;
    
    public:
    Vehicle(int id, string brand, int rentPerDay,VehicleStatus status) : id(id), brand(brand), rentPerDay(rentPerDay), status(status) {}
    virtual void displayInfo() = 0;
    int getId() { return id; }
    int getRentPerDay() { return rentPerDay; }
    string getBrand() { return brand; }
    VehicleStatus getStatus(){return status;}
    void setStatus(VehicleStatus setIt){
        status = setIt;
    }
};

class Car : public Vehicle
{
    int seatingCapacity;
    int fuel;

public:
    Car(int id, string brand, int rentPerDay, int seatingCapacity, int fuel, VehicleStatus status) : Vehicle(id, brand, rentPerDay, status)
    {
        this->seatingCapacity =seatingCapacity;
        this->fuel =fuel;
    }
    void startEngine()
    {
        cout << "Starting Engine!!\n";
    }
    void displayInfo() override
    {
        cout << "Car\nVehicle id :" << getId() << " | Brand : " << getBrand() << " | Rent : " << getRentPerDay() << endl;
    }
    
};

class Bike: public Vehicle{
    int engineCC;
    public:
    Bike(int id, string brand, int rentPerDay, int engineCC, VehicleStatus status) : Vehicle(id, brand, rentPerDay,status){
        this->engineCC = engineCC;
    }

    void displayInfo() override
    {
        cout << "Bike \nVehicle id :" << getId() << " | Brand : " << getBrand() << " | Rent : " << getRentPerDay() << endl;
    }

    void kickStart(){
        cout << "Starting Bike!!\n";
    }

};
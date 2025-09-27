#include "header.h"

class Vehicle
{
private:
    int vehicle_id;
    string brand;
    string model;

public:
    Vehicle(){};
    Vehicle(int vehicle_id, string brand, string model)
    {
        this->model = model;
        this->vehicle_id = vehicle_id;
    }
    virtual void accept() = 0;
    virtual void display() = 0;
    int getVehicleId()
    {
        return vehicle_id;
    }
    void setVehicle(int vehicle_id,string brand, string model){
        this->vehicle_id = vehicle_id;
        this->brand = brand;
        this->model = model;
    }
};

class Car : public Vehicle
{
    int num_doors;
    string fuel_type;
    public:
    Car(){};
    Car(int vehicle_id, string model, string brand, int num_doors, string fuel_type) : Vehicle(vehicle_id, brand, model)
    {
        this->fuel_type = fuel_type;
        this->num_doors = num_doors;
    }

    void accept()
    {
        int vehicle_id;
        string brand;
        string model;
        cout << "Enter Vehicle id : ";
        cin >> vehicle_id;
        cout << "Enter Brand Name : ";
        cin >> brand;
        cin.ignore();
        cout << "Enter Model : ";
        cin >> model;
        cin.ignore();
        cout << "Number of doors : ";
        cin >> num_doors;
        cout << "Fuel Type : ";
        cin >> fuel_type;
        cin.ignore();

        setVehicle(vehicle_id,brand,model);
    }
    void display()
    {
        cout << "Vehicle id : " << getVehicleId()<<endl;
    } 
    void performMaintenance(){
        cout<<"Under Servicing!!\n";
    }
};

class Truck : public Vehicle
{
    int max_load;
    int num_wheels;
    public:
    Truck(){};
    Truck(int vehicle_id, string model, string brand, int max_load, int num_wheels) : Vehicle(vehicle_id, brand, model)
    {
        this->max_load = max_load;
        this->num_wheels = num_wheels;
    }

    void accept()
    {
        int vehicle_id;
        string brand;
        string model;
        cout << "Enter Vehicle id : ";
        cin >> vehicle_id;
        cout << "Enter Brand Name : ";
        cin >> brand;
        cin.ignore();
        cout << "Enter Model : ";
        cin >> model;
        cin.ignore();
        cout << "Max load : ";
        cin >> max_load;
        cout << "Number of wheels : ";
        cin >> num_wheels;
        cin.ignore();
        setVehicle(vehicle_id,brand,model);

    }
    void display()
    {   cout<<"Truck\n";
        cout << "Vehicle id : " << getVehicleId()<<endl;
    }
    void calculateToll(){
        cout<<"Calculating toll!!\n";
    }
};


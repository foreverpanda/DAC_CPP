#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Vehicle
{
    int vehicle_id;
    string vehicle_type;
    public:
    Vehicle(){}
    Vehicle(int vehicle_id,string vehicle_type) 
    : vehicle_id(vehicle_id), vehicle_type(vehicle_type){}

    virtual void display() = 0;

};

class ElectricVehicle:public Vehicle{
    int battery_capacity;
    int charging_time;

    public:
    ElectricVehicle(int vehicle_id,string vehicle_type,int battery_capacity,int charging_time):Vehicle(vehicle_id,vehicle_type){
        this->battery_capacity = battery_capacity;
        this->charging_time = charging_time;
                cout<<"Created Electric vehicle!!\n";

    }
    void chargeBattery(){
        cout<<"Charging!! \n";
    }

    void display(){
        cout<<"Charging time : "<<charging_time<<endl;
    }

};

class DieselVehicle:public Vehicle{
    int fuel_capacity;
    public:
     DieselVehicle(int vehicle_id,string vehicle_type,int fuel_capacity):Vehicle(vehicle_id,vehicle_type){
        cout<<"Created diesel vehicle!!\n";
        this->fuel_capacity = fuel_capacity;
        
    }
    void refuelDiesel(){
        cout<<"Refuiling!!!! \n";
    }
    void display(){
        cout<<"Fuel Capacity time : "<<fuel_capacity<<endl;
    }
};
#include "Vms.cpp"

int main(){
    Vehicle *arr[100] ;

    ElectricVehicle *ev = new ElectricVehicle(101, "EV", 100, 300);
    arr[0] = ev;

     DieselVehicle *dv = new DieselVehicle(102, "Diesel", 50);
    arr[1] = dv;


    for(int i = 0; i<2; i++){
        arr[i]->display();

        if(ElectricVehicle *e = dynamic_cast<ElectricVehicle*>(arr[i])){
            e->chargeBattery();
        }

    }

    // dynamic_cast<Vehicle *>(arr[0])->chargeBattery();
    // DieselVehicle *dv = new DieselVehicle(102,"Diesel vehicle",1000);    

    // arr[1] = dv;

    // dynamic_cast<Vehicle*>(arr[1])->chargeBattery();



}
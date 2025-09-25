#include "Vehicle.cpp"

void carDetails(vector<Vehicle*> &allVehicles){
    int choice;
    bool exit = false;
    while(!exit){
        cout<<"1. Enter Car information\n2. Get all car information\n";
        cin>>choice;
        switch(choice){
            case 1:{
                    // Car(int vehicle_id, string model, string brand, int num_doors, string fuel_type) : Vehicle(vehicle_id, brand, model)
                Vehicle *newCar ;
                newCar = new Car();
                newCar->accept();
                newCar->display();
                allVehicles.push_back(newCar);
            }

        }
    }
}

int main(){
    vector<Vehicle *> allVehicles;
    bool exit = false;

    while(!exit){
        cout<<"------Menu------------\n";
        cout<<"1. Car \n2. Truck\n3. Display truck\n4. Display Car\n4.CarMaintaninece\n5.TruckToll\n";
        int input;
        int choice;
        cin>>choice;
        switch(choice){
            case 1 :{
                Vehicle *newCar ;
                newCar = new Car();
                newCar->accept();
                newCar->display();
                allVehicles.push_back(newCar);
                break;
            }
            case 2:{
                Vehicle *newTruck ;
                newTruck = new Truck();
                newTruck->accept();
                newTruck->display();
                allVehicles.push_back(newTruck);
                break;
            }


            case 3:{
                for(auto i: allVehicles){
                    if(typeid(i) == typeid(Truck)){
                        i->display();
                    }
                }
                break;
            }

            case 4:{
                for(auto i:allVehicles){
                    if(typeid(i) == typeid(Car)){
                        i->display();
                    }
                }
                break;
            }
            case 5:{

                for(auto i: allVehicles){
                    if(auto truck = dynamic_cast<Truck*>(i)){
                        truck->calculateToll();
                    }
                }
                break;

            }
            case 6:{
                for(auto i: allVehicles){
                    if(auto car = dynamic_cast<Car*>(i)){
                        car->performMaintenance();
                    }
                }
                break;
            }
        }
    }
}
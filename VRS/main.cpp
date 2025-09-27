#include "VRS.cpp"

int main()
{
    vector<Vehicle *> list;

    bool exit = 0;
    while (!exit)
    {
        cout << " Add Vehicle (99.Car | 100.Bike ) | 2. Show All | 3. Rent (enum) | 4. Vehicle-specific (RTTI) | 5. Exit\n";
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 99:
        {
            // Car(int id, string brand, int rentPerDay, int seatingCapacity, int fuel) : Vehicle(id, brand, rentPerDay)
            int id, rentPerDay, seatingCapacity, fuel;
            string brand;

            cout << "Enter Car ID: ";
            cin >> id;
             cin.ignore();
            cout << "Enter Car Brand: ";
            cin >> brand;
             cin.ignore();
            cout << "Enter Rent per Day: ";
            cin >> rentPerDay;
             cin.ignore();
            cout << "Enter Seating Capacity: ";
            cin >> seatingCapacity;
             cin.ignore();
            cout << "Enter Fuel (liters): ";
            cin >> fuel;
             cin.ignore();
            Car *newCar = new Car(id, brand, rentPerDay, seatingCapacity, fuel, AVAILABLE);
            list.push_back(newCar);
            break;
        }
        case 100:
        {
            int id, rentPerDay, engineCC;
            string brand;
            // Bike(int id, string brand, int rentPerDay, int engineCC) : Vehicle(id, brand, rentPerDay){

            cout << "Enter Bike ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Bike Brand: ";
            cin >> brand;
             cin.ignore();
            cout << "Enter Rent per Day: ";
            cin >> rentPerDay;
             cin.ignore();

            cout << "Enter EngineCC: ";
            cin >> engineCC;
             cin.ignore();
            Bike *newBike = new Bike(id, brand, rentPerDay, engineCC, AVAILABLE);
            list.push_back(newBike);
            break;
        }
        case 2:{
            for(auto i: list){
                i->displayInfo();
            }
            break;
        }
        case 3:{
            cout<<"Enter Vehicle ID to rent :";
            int id;
            cin>>id;
            cin.ignore();
            Vehicle *it;
            for(auto i : list){
                if(i->getId() == id){
                    it = i;
                }
            }
            if(it->getStatus() == AVAILABLE){
                it->setStatus(RENTED);
                cout<<"RENTING!!!!\n";
                it->displayInfo();

            }
            else{
                cout<<"Vehicle Not Available!!!\n";
            }
            break;
        }

        }
    }
}
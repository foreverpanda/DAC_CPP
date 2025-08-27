#include<iostream>
using namespace std;

class Employee{
    int empId;
    string empName;
    double basicSalary;
    double medical;
    double netSalary;
    double grossSalary;
    double HRA;
    double PF;
    double PT;
    public:

    inline int calculateGrossSalary(){
        return basicSalary+HRA+medical;
    }

    inline int calculateNetSalary(){
        return grossSalary- (PT+PF);
    }


    Employee(){
        cout<<"No Information is being given about the user\nSETTING TO NULL\n";
        empId = 0;
        empName = "NULL";
        basicSalary = 0;
        HRA = 0;
        medical = 1000;
        PF = 0;
        PT = 0;
        netSalary = 0;
        grossSalary = 0;
    }

    Employee(int empId, string empName,double basicSalary){
        this->empId = empId;
        this->empName = empName;
        this->basicSalary = basicSalary;
        HRA = basicSalary/2;
        PF = basicSalary*0.12;
        PT = 200;
        medical = 1000;
        grossSalary = calculateGrossSalary();
        netSalary = calculateNetSalary();
    }

    
    

    void display(){

        cout<<"Emp Id : "<<empId<<"\nEmp Name : "<<empName<<"\nBasic Salary : "<<basicSalary<<"\nHRA : "<<HRA
        <<"\nPF : "<<PF<<"\nPT : "<<PT<<"\nMedical : "<<medical<<endl<<endl;

    }

};

int main(){
    Employee e1;
    e1.display();
    Employee e2(101,"Rajesh",10000);
    e2.display();
}
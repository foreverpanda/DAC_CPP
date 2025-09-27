#include <iostream>
using namespace std;

class DataUsageException : public exception
{
    string msg;

public:
    DataUsageException(string msg) : msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }
};

class InvalidUserException : public exception
{
    string msg;

public:
    InvalidUserException(string msg) : msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }
};

class InternetPlans
{
    int subscriptionCharge;

public:
    int dataUsed;
    // InternetPlans(int subscriptionCharge,int dataUsage):subscriptionCharge(subscriptionCharge),dataUsage(dataUsage){}
    InternetPlans(int dataUsage) : dataUsed(dataUsage) {}
    // virtual void accept() = 0;
    virtual void display() = 0;
    virtual int calculate() = 0;
    void setCharges(int amt)
    {
        subscriptionCharge = amt;
    }
    int getCharges() { return subscriptionCharge; }
    int getDataUsed() { return dataUsed; }
};
class Basic : public InternetPlans
{
    int basicPlan = 500;

public:
    Basic(int dataUsage) : InternetPlans(dataUsage)
    {
        setCharges(500);
    }

    int calculate() override
    {
        int bill = 0;
        if (dataUsed > 50)
        {
            int extraDataUsed = dataUsed - 50;

            while (extraDataUsed > 0)
            {
                extraDataUsed--;
                bill++;
            }
            bill = bill * 5;
            return bill;
        }

        return 0;
    }
    void display() override
    {
        cout << "User type = Basic. Extra data charge = Rs" << calculate() << "Total Bill = Rs" << calculate() + basicPlan << endl;
    }
};

class Premium : public InternetPlans
{
    int premiumPlan = 1000;

public:
    Premium(int dataUsage) : InternetPlans(dataUsage)
    {
        setCharges(1000);
    }
    int calculate() override
    {
        int bill = 0;
        if (dataUsed > 100)
        {
            int extraDataUsed = dataUsed - 100;

            while (extraDataUsed > 0)
            {
                extraDataUsed--;
                bill++;
            }
            bill = bill * 5;
            return bill;
        }
        return premiumPlan;
    }
    void display() override
    {
        cout << "User type = Premium. Extra data charge = Rs" << calculate() << "Total Bill = Rs" << calculate() + premiumPlan << endl;
    }
};

int main()
{
    bool exit = false;
    InternetPlans *plans;
    while (!exit)
    {
        try
        {
            cout << "Enter the type of User (B or P) : ";
            char ch;
            cin >> ch;
            cin.ignore();
            if (ch == 'B')
            {
                cout << "Enter data usage in GB : ";
                int usage;
                cin >> usage;
                while(usage < 0){
                   cin >> usage;

                    throw DataUsageException("Data Usage must be Positive!!\n");
                }
                Basic *basicPlan = new Basic(usage);
                plans = basicPlan;
                plans->display();
            }
            else if (ch == 'P')
            {

                cout << "Enter data usage in GB : ";
                int usage;
                cin >> usage;
                while(usage < 0){
                    cin>>usage;
                    throw DataUsageException("Data Usage must be Positive!!\n");
                }
                Premium *basicPlan = new Premium(usage);
                plans = basicPlan;
                plans->display();
            }
            else
            {
                throw InvalidUserException("INVALID INPUT! \n");
            }
        }
        catch (DataUsageException &e)
        {
            cout << e.what();
        }
        catch (InvalidUserException &e)
        {
            cout << e.what();
        }
    }
}

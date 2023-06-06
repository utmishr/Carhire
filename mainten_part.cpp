// function att_set
#include <iostream>
#include <string.h>
#include "payment.cpp"
using namespace std;
class Parts
{
private:
    string name, brand, status;
    int cost;

public:
    void Set_status(int n)
    {
        if (n == 0)
        {
            status = "Not Available";
        }
        else
        {
            status = "Available";
        }
    }
    int ret_cost()
    {
        return cost;
    }
    void att_set(string st1, string st2, int a)
    {
        status = "Available";
        name = st1;
        brand = st2;
        cost = a;
        // call payment
    }
    Parts(/* args */);
    ~Parts();
};

Parts::Parts(/* args */)
{
}

Parts::~Parts()
{
}
class Maintenance
{
private:
    int charge, days;
    string complain;
    Parts part_req;
    Payment obj;

public:
    void Set_complain(string st)
    {
        complain = st;
    }
    void part_select()
    {
        string s1, s2;
        int cost;
        cout << "Enter the name of part ";
        cin >> s1;
        cout << "Enter the brand of part ";
        cin >> s2;
        cout << "Enter the cost of part ";
        cin >> cost;
        part_req.att_set(s1, s2, cost);
        //     user se attribute lena hai.
        //         pament call karna hjai
    }
    void Check_damage(string name)
    {
        int n;
        cout << "Enter no. of days required ";
        cin >> n;
        days = n;
        cout << "Enter maintenance charge per day ";
        cin >> n;
        charge = n * days;
        part_select();
        charge = charge + part_req.ret_cost();
        // add part cost to charge
        obj.payment_info( name ,charge);
    }
    int Maintenance_cost()
    {
        return charge;
    }
    Maintenance(/* args */);
    ~Maintenance();
};

Maintenance::Maintenance(/* args */)
{
}

Maintenance::~Maintenance()
{
}

// function att_set
#include <iostream>
#include <string.h>
#include "mainten_part.cpp"
using namespace std;
class car_add: public Maintenance
{
private:
    string name, type; int amount, age;
    Maintenance obj;

public:
    void save(){
        //the push_back to the car_list array will occur here
    }
    void att_set(string st1, string st2, int a, int b){
        name=st1;
        type=st2;
        amount=a;
        age=b;
        obj.Check_damage(name);
    }
    string getname(){
        return name;
    }
    car_add(/* args */);
    ~car_add();
};

car_add::car_add(/* args */)
{
}

car_add::~car_add()
{
}

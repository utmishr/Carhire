#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "wagon.cpp"
using namespace std;
class Payment// : public CarList.
{
private:
  int P_id;
  string CarName;
  int amount;

public:
  void payment_info(string name ,int amt)
  {
    P_id = rand() % 10000;
    //CarName = getname();
    //amount = Maintenance_cost();
    CarName= name;
    amount = amt;
    cout << "the payment ID is: " << P_id << endl;
    cout << "the car name is: " << CarName << endl;
    cout << "the amount for the repair is: " << amount << endl;
    final_save();
  }
};
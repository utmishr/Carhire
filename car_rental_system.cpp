// remove search from car_list
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
//#include "car_add.cpp"
//#include "payment.cpp"
//#include "wagon.cpp"
//dfd
#include "CarList.cpp"
using namespace std;
class Car_Rental_System
{
private:
  CarList *list;
  int usertype;

public:
  void setUserType(int usertype)
  {
    this->usertype = usertype;
  }
  void search()
  {
    list->display();
  }
};

int main()
{
  Car_Rental_System customer;
  cout << "Enter the user type 0 if you want to give the car. Else enter the usertype 1 to take a car " << endl;
  int x;
  cin >> x;
  customer.setUserType(x);
  switch (x)
  {
  case 0:
  {
    CarList obj;
    obj.add();
  }
  break;

  case 1:
    customer.search();
    break;

  default:
    cout << "Wrong choice" << endl;
  }

  /*cout<<"if you want to search write yes else write no: "<<endl;
  string choice;
  cin>>choice;
  if(choice=="yes")
  {
      customer.search();
  }

  else
    return 0;*/

  /*cout<<"if you. want to search write yes else write no: "<<endl;
  string choice;
  cin>>choice;
  if(choice=="yes")
  {
      customer.search();
  }

  else
    return 0;*/

  return 0;
}

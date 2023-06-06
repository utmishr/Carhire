#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "car_add.cpp"
//#include "payment.cpp"
//#include "wagon.cpp"
//#include "mainten_part.cpp"
using namespace std;
class CarList
{
private:
  int Car_List;
  car_add obj1;
public:
void del_service(char id)
{
  fstream file;
  vector<string> v;
  string tp;
  int count = 0; char a;
  file.open("service.txt", ios::in);
  if (file.is_open())
  {
    while (getline(file, tp))
    {
      // cout << tp << "\n";
      v.push_back(tp);
    }
    file.close();
  }
  else
    cout << "File open is unsuccesfull" << endl;
  for (int i = 0; i < v.size(); i++)
  {
    a = v[i][0];
    if (a == id)
    {
      v.erase(v.begin() + count);
    }
    count++;
  }
  file.open("service.txt", std::ofstream::out | std::ofstream::trunc);
  for (int i = 0; i < v.size(); i++)
  {
    tp = v[i];
    file << tp;
    file << "\n";
  }
  file.close();
    cout << "the payment ID is: " << id << endl;
    cout << "the car name is: " << "Service" << endl;
    cout << "the amount for the repair is: " << 3500 << endl;
}
void del_sedan(char id)
{
  fstream file;
  vector<string> v;
  string tp;
  int count = 0; char a;
  file.open("sedan.txt", ios::in);
  if (file.is_open())
  {
    while (getline(file, tp))
    {
      // cout << tp << "\n";
      v.push_back(tp);
    }
    file.close();
  }
  else
    cout << "File open is unsuccesfull" << endl;
  for (int i = 0; i < v.size(); i++)
  {
    a = v[i][0];
    if (a == id)
    {
      v.erase(v.begin() + count);
    }
    count++;
  }
  file.open("sedan.txt", std::ofstream::out | std::ofstream::trunc);
  for (int i = 0; i < v.size(); i++)
  {
    tp = v[i];
    file << tp;
    file << "\n";
  }
  file.close();
    cout << "the payment ID is: " << id << endl;
    cout << "the car name is: " << "Sedan" << endl;
    cout << "the amount for the repair is: " << 5000 << endl;
}
void del_hatchback(char id)
{
  fstream file;
  vector<string> v;
  string tp;
  int count = 0; char a;
  file.open("hatchback.txt", ios::in);
  if (file.is_open())
  {
    while (getline(file, tp))
    {
      // cout << tp << "\n";
      v.push_back(tp);
    }
    file.close();
  }
  else
    cout << "File open is unsuccesfull" << endl;
  for (int i = 0; i < v.size(); i++)
  {
    a = v[i][0];
    if (a == id)
    {
      v.erase(v.begin() + count);
    }
    count++;
  }
  file.open("hatchback.txt", std::ofstream::out | std::ofstream::trunc);
  for (int i = 0; i < v.size(); i++)
  {
    tp = v[i];
    file << tp;
    file << "\n";
  }
  file.close();
    cout << "the payment ID is: " << id << endl;
    cout << "the car name is:" << "Hatchback" << endl;
    cout << "the amount for the repair is: " << 8000 << endl;
}
  void display()
  {
    cout << "enter the type of wagon you want to rent: " << endl;
    cout << "enter 1 for hatchback " << endl;
    cout << "enter 2 for sedan " << endl;
    cout << "enter 3 for service " << endl;
    int r;
    char choice;
    cin >> r;
    switch (r)
    {
    case 1:
    {
      fstream newfile;
      newfile.open("hatchback.txt", ios::in);
      if (newfile.is_open())
      {
        string tp;
        while (getline(newfile, tp))
        {
          cout << tp << "\n";
        }
        newfile.close();
      }
      else
        cout << "file open is unsuccesfull" << endl;
      cout << "Enter Car chosen\n";
      cin >> choice;
      del_hatchback(choice);
      // to hatchback func(choice);
      // this function in wagon will call payment
    }
    break;
    case 2:
    {
      fstream newfile1;
      newfile1.open("sedan.txt", ios::in);
      if (newfile1.is_open())
      {
        string tp;
        while (getline(newfile1, tp))
        {
          cout << tp << "\n";
        }
        newfile1.close();
      }
      else
        cout << "File open is unsuccesfull" << endl;
      cout << "Enter wagon chosen\n";
      cin >> choice;
      del_sedan(choice);
      // to sedan func(choice);
      // this function in wagon will call payment
      break;
    }
    case 3:
    {
      fstream newfile2;
      newfile2.open("service.txt", ios::in);
      if (newfile2.is_open())
      {
        string tp;
        while (getline(newfile2, tp))
        {
          cout << tp << "\n";
        }
        newfile2.close();
      }
      else
      {
        cout << "File open is unsuccesfull" << endl;
      }
      cout << "Enter wagon chosen\n";
      cin >> choice;
      del_service(choice);
      // to service func(choice);
      // this function in wagon will call payment
      //void del(char id)

    }
    }
  }

  void add()
  {
    cout << "Enter the type of wagon you want to add: " << endl;
    cout << "Enter 1 for hatchback " << endl;
    cout << "Enter 2 for sedan " << endl;
    cout << "Enter 3 for service " << endl;
    int q;
    cin >> q;
    string cname;
    cout << "Enter the name of the car" << endl;
    cin >> cname;
    int cost;
    cout << "Enter the cost of the car" << endl;
    cin >> cost;
    string type;
    cout << "Enter the type  of the car" << endl;
    cin >> type;
    int ageOfCar;
    cout << "Enter the age of the car" << endl;
    cin >> ageOfCar;
    obj1.att_set(cname, type, cost, ageOfCar);
    switch (q)
    {

    case 1:

      break;

    case 2:

      break;

    case 3:

      break;
    }
  }
  void total_wagon()
  {
    if (Car_List == 0)
    {
      cout << "No car available";
    }
    else
    {
      cout << "Total car available: " << Car_List;
    }
  }
};
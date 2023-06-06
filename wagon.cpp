#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class wagon
{
private:
  bool damage, available;
  string Last_maintainance_date;
  string type;
  int id;

public:
  int mileage;            // changing mileage to public from private.
  int km;                 // kilometer run new to add in diagram
  virtual void set() = 0; // (id and type) both set together
                          // no need of type_pvirtual fuction as (id and type) both coming from set() function
  void set_avialable()
  {
    available = 1;
  }
  string set_info() // new function for setting info
  {
    string s;
    cout << "Enter id of the wagon ";
    cin >> id;
    s = s + to_string(id) + " ";
    cout << "Enter type of the wagon ";
    cin >> type;
    s = s + type + " ";
    cout << "Enter if there is any damage (1/0) ";
    cin >> damage;
    s = s + to_string(damage) + " ";
    cout << "Enter the last maintainance date ";
    cin >> Last_maintainance_date;
    s = s + Last_maintainance_date + " ";
    return s;
  }
  // virtual get_info() = 0; // making this virtual as information shown by different types of wagon is of different size
};

class hatchback : public wagon
{
private:
  string model_name;
  int amount = 8000;
  int seater; // cappacity changes to seater

public:
  void set();
  void age()
  {
    cout << "Age of the wagon " << km / mileage;
  }
};

void hatchback::set()
{
  ofstream file;
  string s;
  s = wagon::set_info();
  cout << "Enter the model name of wagon ";
  cin >> model_name;
  s = s + model_name + " ";
  cout << "Enter the seats available in wagon ";
  cin >> seater;
  s = s + to_string(seater) + " ";
  cout << "Enter the mileage of the wagon ";
  cin >> mileage;
  s = s + to_string(mileage) + " ";
  s = s + to_string(amount);
  file.open("hatchback.txt", ios::app);
  file << s;
  file << "\n";
  file.close();
}

class sedan : public wagon
{
private:
  string model_name;
  int seater;
  int bootspace;
  int amount = 5000;

public:
  void set();
  void age()
  {
    cout << "Age of the wagon " << km / mileage;
  }
};

void sedan::set()
{
  ofstream file;
  string s;
  s = wagon::set_info();
  cout << "Enter the model name of wagon ";
  cin >> model_name;
  s = s + model_name + " ";
  cout << "Enter the seats available in wagon ";
  cin >> seater;
  s = s + to_string(seater) + " ";
  cout << "Enter the mileage of the wagon ";
  cin >> mileage;
  s = s + to_string(mileage) + " ";
  cout << "Enter the bootspace available in wagon ";
  cin >> bootspace;
  s = s + to_string(bootspace) + " ";
  s = s + to_string(amount);
  file.open("sedan.txt", ios::app);
  file << s;
  file << "\n";
  file.close();
}

class service : public wagon
{
private:
  string model_name;
  int seater; // cappacity changes to seater
  int amount = 3500;

public:
  void set();
  void age()
  {
    cout << "Age of the wagon " << km / mileage;
  }
};

void service::set()
{
  ofstream file;
  string s;
  s = wagon::set_info();
  cout << "Enter the model name of wagon ";
  cin >> model_name;
  s = s + model_name + " ";
  cout << "Enter the seats available in wagon ";
  cin >> seater;
  s = s + to_string(seater) + " ";
  cout << "Enter the mileage of the wagon ";
  cin >> mileage;
  s = s + to_string(mileage) + " ";
  s = s + to_string(amount);
  file.open("service.txt", ios::app);
  file << s;
  file << "\n";
  file.close();
}

void final_save()
{
  wagon *persPtr[100];
  int n = 0;
  char choice;
  do
  {
    cout << "Enter your choice sedan, hatchback or service (s/h/d) : ";
    cin >> choice;
    if (choice == 's')
      persPtr[n] = new sedan;
    if (choice == 'h')
      persPtr[n] = new hatchback;
    if (choice == 'd')
      persPtr[n] = new service;
    persPtr[n++]->set();
    cout << "Enter another(y / n) ? ";
    cin >> choice;
  } while (choice == 'y');
}

void del(char id)
{
  fstream file;
  vector<string> v;
  string tp;
  int count = 0;
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
    char a = v[i][0];
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
}

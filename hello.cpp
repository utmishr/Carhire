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
    file.open("service.txt", ios::app);
    file << s;
    file << "\n";
    file.close();
}

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
    s = s + to_string(bootspace);
    file.open("sedan.txt", ios::app);
    file << s;
    file << "\n";
    file.close();
}
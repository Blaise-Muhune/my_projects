#include <iostream>

using namespace std;
struct Date
{
    int month;
    int day;
    int year;
};

struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate;
    Place residence;
};

int main() 
{
    EmployeeInfo manager;
    
    cout << "Enter the manager's nam: ";
    getline(cin, manager.name);
    
    cout << "enter the manger's employer number: ";
    cin >> manager.employeeNumber;

    cout << "now enter the manager's dat of birth. \n";
    cout << "MOuth (up to 2 digits): ";
    cin >> manager.birthDate.month;
    cout << "Day: ";
    cin >> manager.birthDate.day;
    cout << "Year: ";
    cin >> manager.birthDate.year;
    cin.ignore(); //skip the remaining new lilne character
    
    cout << "enter the manager address: ";
    cin >> manager.residence.address;
    cout << "enter the manager city: ";
    cin >> manager.residence.city;
    cout << "enter the manager state: ";
    cin >> manager.residence.state;
    cout << "enter the manager zip: ";
    cin >> manager.residence.zip;
    
    // display the info just entered
    
    cout << "\n Here is the manager information: \n";
    cout << manager.name << endl;
    cout << "Employee number "<< manager.employeeNumber << endl;
    cout << "Date of birth: ";
    cout << manager.birthDate.month << "-";
    cout << manager.birthDate.day << "-";
    cout << manager.birthDate.year << endl;
    cout << "Place of residence \n";
    cout << manager.residence.address << " ";
    cout << manager.residence.city<< " ";
    cout << manager.residence.state<< " ";
    cout << manager.residence.zip<< " ";
    

    return 0;
}
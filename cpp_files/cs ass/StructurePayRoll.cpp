/*
Date: 11/3/2021
Name: Blaise Muhune
Class: CPTR-151
Desc: this program ask a user about his work information then display the result.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct PayRoll
{
    string name;
    int empNumber;
    double hours;
    double payRate;
    double grossPay;
};

PayRoll getInfo( PayRoll);

int main() {
    
    //declare
    PayRoll employee;
    char option = 'y';
    while(option == 'y')
    {
        //populate and duh-call
        employee = getInfo(employee);
        
        //display
        cout << endl;
        cout << "Number: " << employee.empNumber << endl;
        cout << "Name: " << employee.name << endl;
        cout << "pay Rate " << employee.payRate<< endl;
        cout << "hours " << employee.hours<<endl;
        cout <<"Gross Pay " << employee.grossPay<<endl;
        cout <<endl;
        cout <<"continue: ";
        cin >> option;
        cout <<endl;
    }
    return 0;
}

/*************************************************
 * define
 * this function populate a employee information.
**************************************************/

PayRoll getInfo(PayRoll employee)
{
    cout << "enter the employee's number: ";
    cin >> employee.empNumber;
    
    cout << "enter the employee's name: ";
    cin >> employee.name;
    
    do
    {
    cout << "enter a positve the employee's pay rate: ";
    cin >> employee.payRate;
    }
    while(employee.payRate <0);
    
    do
    {
    cout << "enter a positive the employee's hours: ";
    cin >> employee.hours;
    } while(employee.hours < 0);
    
    employee.grossPay = employee.hours * employee.payRate;
    cout << "enter the employee's gross pay is "<< employee.grossPay;
    
    return employee;
}
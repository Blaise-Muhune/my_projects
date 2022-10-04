#include <iostream>

using namespace std;

void getNumber(int *);
void doubleNumber(int *);

int main() {
    
    /*************************************************/
    //functions section
    
    int number;
    getNumber(&number);
    doubleNumber(&number);
    
    cout << "number becomes :" << number << endl << endl;
    /************************************************/
    
    int x = 25;
    int y = 50;
    int z = 100;
    int *pointer; // *pointer will hold the value of the given address
    pointer = &x; // pointer will old the address of the given variable
    
    cout << "the value of x is : "<< x << endl;
    *pointer = *pointer + 100;
    cout << "the value of x is : " << x << endl;
    
    pointer = &y;
    cout << "the value of y is : "<< y << endl;
    *pointer = *pointer + 100;
    cout << "the value of y is : " << y << endl;
    
    pointer = &z;
    cout << "the value of z is : "<< z << endl;
    *pointer = *pointer + 100;
    cout << "the value of z is : " << z << endl;
    
    
    return 0;
}

void getNumber(int *myNumber)
{
    cout << "Enter a value: ";
    cin >> *myNumber;
}

void doubleNumber(int *myNumber)
{
    *myNumber *= 2;
}
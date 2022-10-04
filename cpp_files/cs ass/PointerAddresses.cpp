/*****************************************************
* Class: CPTR-151
* Date: 11/30/2021
* Name: Blaise Muhune
* Description: This program ask the user for a number then double it by using the address in the memory.
******************************************************/

#include <iostream>
using namespace std;

//declare
void getNumber(int *);
void doubleNumber(int *);

int main() 
{
    
    //declare
    int number;

    //duh-call
    getNumber(&number);
    
    //desplay
    cout << "\n\nnumber is: " << number << endl; 

    //duh-call
    doubleNumber(&number);
    cout << "the doubled value of the number is: " << number<< endl;
    
    return 0;
}

//define function to retrive the entered value
void getNumber(int *myNumber)
{
    cout << "Enter a number: ";
    cin >> *myNumber;
}

//define function to double the entered number
void doubleNumber(int *myNumber)
{
    *myNumber *= 2;
}
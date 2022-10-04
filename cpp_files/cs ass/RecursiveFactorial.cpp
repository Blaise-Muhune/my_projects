/* 
Date: 11/11/2021
Name: Blaise Muhune
Desc: this program calculate the factorial of a given number
*/

#include<iostream>
using namespace std;

//declare
int factorial(int);

int main() {

    // declare
    int counter;
    int number;

    // imput
    cout << "Enter the Number :";
    cin>>number;

    // du-call
    cout << number << " Factorial Value Is " << factorial(number);
    
    return 0;
}

// Factorial recursion Function

int factorial(int number) {
    if (number == 0)
        return 1;
    else
        return (number * factorial(number - 1));
}
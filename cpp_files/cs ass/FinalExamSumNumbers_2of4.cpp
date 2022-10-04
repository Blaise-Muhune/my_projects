/**************************************************************************************************************
* Name: Blaise Muhune 
* Date: 12/10/2021
* class: CPTR-151
* Description: this program has a recursive loop that will add each number lower or equal to the inputed number
**************************************************************************************************************/
#include <iostream>
using namespace std;

//declare
int sumForNumber(int);

int main() {
    //declare
    int number;
   
    //populate
    cout << "Enter the number to add it sum: ";
    cin >> number;
    
    //duh-call
    int result = sumForNumber(number);
    
    cout <<" = " << result;
    
    return 0;
}


/**************

define
Recursive loop

**************/
int sumForNumber(int number)
{
    //declare
    int result = 0;
    int i = 0;
    
    if(i < number){
        
        //populate
       result += number + sumForNumber(number-1);
       cout << number << " + ";
       i++;
    }
    
    return result;
    
}

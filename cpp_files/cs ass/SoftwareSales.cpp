/*************************************************
 * Date: 11/08/2021
 * Name: Blaise Muhune
 * Class: CPTR-151
 * Desc: this program is calculating a user's discount depending on the number of packages
**************************************************/

#include <iostream>
using namespace std;
void calcDiscount(int);

int main()
{
    //declare
    int numberOfPackages;

    //populate
    cout << "Enter the number of packages "<< endl;
    cin >> numberOfPackages;

    //duh-call
    calcDiscount(numberOfPackages);
}

/************************************
 * difine
************************************/
void calcDiscount(int numberOfPackages)
{
    //declare
    int total = 0;
    int retail = 99.0;
    
    if(numberOfPackages >= 10 && numberOfPackages <= 19)
    {
        total = retail* 0.20 * numberOfPackages;
        cout << "you'll play $"<< total << " for a discount of 20% ";


    }
    else if(numberOfPackages >= 20 && numberOfPackages <= 49)
    {
        total = retail* 0.30 * numberOfPackages;
        cout << "you'll play $"<< total << " for a discount of 30% ";


    }
    else if(numberOfPackages >= 50 && numberOfPackages <= 99)
    {
        total = retail* 0.40 * numberOfPackages;
                cout << "you'll play $"<< total << " for a discount of 40% ";


    }
    else if(numberOfPackages >= 100)
    {
        total = retail* 0.50 * numberOfPackages;
        cout << "you'll play $"<< total << " for a discount of 50% ";

    }
    else
    {
        total = retail* numberOfPackages;
      cout << "No discount :( , you'll pay $" << total;
    }
}

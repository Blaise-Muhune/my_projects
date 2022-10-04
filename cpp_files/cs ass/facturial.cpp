
#include <iostream>

using namespace std;

int factorial(int);

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "The Factorial of "<< number << " is " << factorial(number) << endl;
    
   return 0;
}

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    
    else
    {
        return n * factorial(n-1);
    }
}
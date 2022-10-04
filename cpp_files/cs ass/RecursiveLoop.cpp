/*******************************************************
 * Name: Blaise Muhune
 * Class: CPTR-151
 * Desc: this program displays my name 10 time
*******************************************************/

#include <iostream>

void recursiveFunction(int);

int main()
{
    //declare
    int digit = 0;
    
    //duh-call
    recursiveFunction(digit);
    return 0;
}

//define
void recursiveFunction(int digit)
{

    if(digit < 10)
    {
        //display
        std::cout << "Blaise" << std::endl;
        recursiveFunction(digit + 1);
    }
}


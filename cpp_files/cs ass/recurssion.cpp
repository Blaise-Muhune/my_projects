/**************************************************************************************
 * date: 11/3/2021
 * Class: CPTR-151
 * Name: Blaise Muhune
 * Description: This program will display my name 10 times by using a Recursive Function. 
 ***************************************************************************************/

#include <iostream>

using namespace std;

void message(int);

int main() 
{
    //initialize and duh-call
    message(4);
    return 0;
}

//send

/*********************************************************
 * Define
 * this function display the message each time (times > 0)
 *******************************************************/
void message(int times)
{
    //compare
    if(times > 0)
    {
        //statement
        cout << "before at : " << times << endl;
        message (times -1);
        cout << times << endl;
        
        //new-value
        
    }
}
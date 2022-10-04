/**************
 * Date: 10/25/2021
 * class: CPTR-151
 * Name: Blaise Muhune
 * Desciption: this program calculate the average, the least and
    The greatest amount of food eaten by monkeys.
 ***************/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
    
    //declare
    int size1 = 3;
    int size2 = 7;
    int table[size1][size2];
    int value;
    
    //populate
  for(int i = 0 ; i < size1; i++)
    {
        for ( int j = 0; j < size2; j++)
        {
            cout << "enter a number: ";
            cin >> value;
            while(value < 0)
            {
                cout << "enter a positve value: ";
                cin >> value;
            }
            table[i][j] = value;
        }
    }
     for(int i = 0 ; i < size1; i++)
    {
        for ( int j = 0; j < size2; j++)
        {
            //display
            cout << table[i][j] << "  ";
        
        }
        cout<< endl;
    
    }

    
    
    for(int i = 0 ; i < size2; i++)
    {
        int totalPerDay = 0;
        for ( int j = 0; j < size1; j++)
        {
            totalPerDay = totalPerDay  +  table[j][i];
        }
        
        //display
        
        cout << "Average day " << i+1 << " is " <<totalPerDay/size1;
        cout << endl;
    
    }

    cout << endl;
    
    // The least and the Greatest

    int high = table[0][0];
    int low = table[0][0];
    
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(table[i][j] > high)
            {
                high = table[i][j];
            }
            else if(table[i][j] < low)
            {
                low = table[i][j];
            }
            
        }
    }
    
    //display
    
    cout << "high: "<< high;
    cout << endl;
    cout << "low: "<< low;
} 


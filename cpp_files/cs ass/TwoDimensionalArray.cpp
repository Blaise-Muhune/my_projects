#include <iostream>
#include <stdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() 
{
     int sales[5][4];
     int highest;
     int lowest;
     int row, col;
     double sumRow = 0;
     double sumCol = 0;
     char option =  'a';
     
     unsigned seed = time(0); //Get the system time
     srand(seed);
     
     do{
         //Populate the array
         for(row = 0; row < 5; row++)
         {
             highest = sales[row][0];
             for (col = 0; col<4; col++)
             {
                 sales[row][col] = rand()%100+1;
                 cout << setw(4) << sales[row][col] << " "; // setw(n) 
                 
             }
            
            cout <<endl;
         }
         
         //Highest & Lowest value in the row
         
         for( int row = 0; row < 5; row++)
         {
             highest = sales[row][0];
             lowest = sales[row][0];
             
             for(col = 0; col < 4; col++)
             {
                 if(highest < sales[row][col])
                    highest = sales[row][col];
                if(lowest > sales[row][col])
                    lowest = sales[row][col];
                    
                sumRow = sumRow + sales[row][col];
             }
             
             cout << "Row " << row << " highest value " << highest << endl;
             cout << "Row " << row << " lowest value " << lowest << endl;
             cout << "Row " << row << " Total for year " << sumRow << endl;
             cout << "Row " << row << " average value " << sumRow/4 << endl;
             sumRow = 0;
             cout << enld;
         }
     }

    return 0;
}
//Blaise Muhune
//CPTR-151
//DESCPTION: This program display the highest and the lowest of the a weekly sales entered by the user
//dailySales.cpp

#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <array>

//declare
void populateArray(int [], int);
void displayResults(int [], int, int);
void TheHighestandLowestofTheWeek(int [], int);
 
int main()
{
    char options;
    cout << "Do you want to start the program?: Y/N ";
    cin >> options;

    while(options == 'y' || options == 'Y')
    {
        cout << "Welcome to Daily Sales" << endl << endl; 
        cout << "1 is for Monday, 2 is for Tuesday, 3 Wednesday, 4 is Thursday, 5 is Friday. Enjoy" << endl << endl << endl;

        //declare
        int size = 5;
        int total = 0;
        int weeklySales[size];

        //Da-call
        populateArray(weeklySales, size);
        displayResults(weeklySales, size, total);
        TheHighestandLowestofTheWeek(weeklySales, size);
        
            
        for(int i=0; i<size; i++)
        {
            cout << weeklySales[i] << "\n";
        }

        cout << "Do you want to continue?: ";
        cin >> options;
    }
        
    return 0;
}


void populateArray(int sales[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << "Enter sales for day " << (i+1) << " : ";
        cin >> sales[i]; 
    }
}


void TheHighestandLowestofTheWeek(int array[], int size)
{
    //declare
    int theHighestValue = array[0];
    int theLowestValue = array[0];
    int theHighestValueIndex = 0;
    int theLowestValueIndex = 0;
    
    for(int i=0; i<size; i++)
    {
        if(array[i] > theHighestValue)
        {
            theHighestValue = array[i];
            theHighestValueIndex = i;
        }
        else
    {
        theLowestValue = array[i];
        theLowestValueIndex = i;
    }
    
    }    
    

    //display
    cout << "The Highest Sale was: " << theHighestValue << endl;
    cout << "The Lowest Sale was: " <<   theLowestValue << endl;
}

void displayResults(int sales[], int size, int total)
{
  for(int i=0; i<size; i++)
  {
    total = total + sales[i];
  }
  int average = total/size;
  
  //display
  cout << "\nThe total  of the array is: " << total << "\nThe average of the array is: " << average << endl;
}

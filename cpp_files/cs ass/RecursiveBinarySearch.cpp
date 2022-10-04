/*****************************************************************
 * Date: 11/14/2021
 * Class: CPTR-151
 * Name: Blaise Muhune
 * Desc: this program does the binarySeach by using the recursion
*****************************************************************/

#include <iostream>
using namespace std;

//define
int binarySearch(int[], int , int, int);
void populateArray(int[], int);
void bubbleSort( int[], int);
int main() 
{
    //define
    int size = 20;
    int array[size];
    int number;
    int results;
    
    //duh-call
    populateArray(array, size);
    bubbleSort(array, size);
    
    //display
    for (int i = 0; i < size; i++)
    {
       cout <<"array["<<i<<"] = "<< array[i] <<endl<< endl; 
    }
    
    
    cout << "Enter the number you need to search for: ";
    cin >> number;
    
    results = binarySearch(array, 0, size -1, number);
    
    if(results == -1)
        cout << "That number does not exist in the array";
    else
        cout << "That number is found at element " << results;
        
    return 0;
}

/***********************************************************
 * define
 * populate array
***********************************************************/

void populateArray(int array[], int arraySize)
{
    //populates the array with random numbers
    unsigned seed = time(0);
    srand(seed);
    
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = rand() % 100 +1;
    }

}


/***********************************************************
 * define
 * bubble sort
***********************************************************/
void bubbleSort( int array[], int arraySize)
{
    for(int i= 0; i < arraySize; i++)
    {
        for(int j = i; j < arraySize; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
}

/***********************************************************
 * define
 * binary search
***********************************************************/

int binarySearch(int array[], int first, int last, int value)
{
    int middle;
    
    if(first > last)
        return -1;
    middle = (first + last)/2;
    if(array[middle] == value)
        return middle;
    if(array[middle] < value)
        return binarySearch(array, middle+1, last, value);
    else
        return binarySearch(array, first, middle-1, value);
}
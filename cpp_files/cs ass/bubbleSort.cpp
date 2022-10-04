#include <iostream>

using namespace std;
void populateArray(int [], int);
void bubbleSort(int[], int);
void display(int[], int);

int main() 
{
    int size = 5;
    int array[size];
    populateArray(array, size);
    bubbleSort( array, size);
    display(array, size);
    
    
    
    return 0;
}

void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "position "<< i << " is " << array[i]<< endl;
    }
}


void populateArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> array[i];
        cout << '\n';
    }
}

void binarySearch(int array[], int size)
{
    int first = 0;
    int last = size -1;
    int middle = 0;
    
    while(first <= last)
    {
        
    }
}


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
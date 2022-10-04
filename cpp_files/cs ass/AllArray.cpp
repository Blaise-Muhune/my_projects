/*
  Name: Blaise Muhune
  Class: CPTR-151
  Date: 10/19/2021
  Description: this program perform different function on the array.
*/
//AllArray.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

//declare
void populateArray(int[], int);
void highestLowestTotalAverage(int[], double);
void sequentialSearch(int[], double);
void binarySearch(int[], double);
void bubbleSort(int[], int);

int main()
{
    //declare
    int arraySize = 50;
    int array[arraySize];
    char again = 'y';

    do
    {
    //duh-call
    populateArray(array, arraySize);
    
    std::cout << "----------------------------------------------------------" << std::endl;

    //duh-call
    highestLowestTotalAverage(array, arraySize);

    std::cout << "----------------------------------------------------------" << std::endl;

    //duh-call
    sequentialSearch(array, arraySize);

    std::cout << "----------------------------------------------------------" << std::endl;

    //duh-call
    bubbleSort(array, arraySize);

    std::cout << "----------------------------------------------------------" << std::endl;

    //duh-call
    binarySearch(array, arraySize);
    
    std::cout << "continue (Y/N) :";
    std::cin >> again;
    std::cout << "\n";
    }
    while(again == 'y' || again == 'Y');

    return 0;

}

//define
void populateArray(int array[], int arraySize)
{
    //populates the array with random numbers
    unsigned seed = time(0);
    srand(seed);
    
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = rand() % 500 +1;
    }

    for (int i = 0; i < arraySize; i++)
    {
        std::cout << array[i] << std::endl;
    }
    

}

//define
void highestLowestTotalAverage(int array[], double arraySize)
{
    //declare
    int theHighestValue = array[0];
    int theLowestValue = array[0];
    int theHighestValueIndex = 0;
    int theLowestValueIndex = 0;
    double total = 0;
    double average;

//------------------------------------------------------------------------------------------------------------------

    for(int i=0; i < arraySize; i++)
    {
        //finds the highest value
        if(theHighestValue < array[i])
        {
            theHighestValue = array[i];
            theHighestValueIndex = i;
        }
        
        //finds the lowest value
        if(theLowestValue > array[i])
        {
            theLowestValue = array[i];
            theLowestValueIndex = i;
        }

        //finds the total
        total = total + array[i];

        //finds the average
        average = total / arraySize;
    }
    
//------------------------------------------------------------------------------------------------------------------
    std::cout << "The highest value is: " << theHighestValue << "\n";
    std::cout << "The lowest value is: " << theLowestValue << "\n";
    std::cout << "The total is: "<< total << std::endl;
    std::cout << "The average is: " << average << std::endl;

}

//define
void sequentialSearch(int array[], double arraySize)
{
    double choice;
    int found = 0;

    std::cout << "Guess a number thats in the array: ";
    std::cin >> choice;

    //sequentialSearch
    for(int i = 0; i < arraySize; i++)
    {
        if (choice == array[i]){
            
            found = 1;
        }
    }

    if (found == 0)
    {
        std:: cout << "it is not in the array"<<std:: endl;
    }else
     {
       std:: cout << "found it" << std::endl; 
      }
    
}

// define
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

//define
void binarySearch(int array[], double arraySize)
{
    int value;
    std::cout << "Enter a value to search for: ";
    std::cin >> value;

    int first = 0;
    int last = arraySize - 1;
    int middle;

    //binary search
    while(first <= last)
    {
        middle = (first + last) / 2;
        if(value < array[middle])
        {
           last = middle; 
        } 

        else if ( value > array[middle])
        {
            first = middle;
        }else
        {
            found = 1;
            break;
        }
        if(last == first)
        {
            break;
        }

    }

    if(found == 0)
    {
        std:: cout << "not there [] cuhhh\n";
    }else{
	std:: cout << "found It \n";
	}
}

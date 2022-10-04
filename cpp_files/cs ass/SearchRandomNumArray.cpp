/*******************
 * Date: 10/07/2021
 * Name: Blaise Muyumba Muhune
 * Class: CPTR-151
 * Description: this program let the user search for a number in a array with value 
     that was randomly generated. then the program dispays how many times the user 
     found what he was searching for.
     
     this program run until the user is done.
     
 *******************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//declare
int searchNumberAndReturnScore(int, int, int[]);
void generateRandomValue(int, int[]);

int main() 
{
    //declare
    int size = 15;
    int randomArray[size];
    int userChosenNumber;
    int score;
    char WantToContinue='y';
    
    //da-call
    generateRandomValue(size, randomArray);
    
    do
    {
        //da-call
        score = searchNumberAndReturnScore(userChosenNumber, size, randomArray);
        
        cout << "Continue (Y/N): ";
        cin >> WantToContinue;
        cout << endl;
    }
    while(WantToContinue == 'y' || WantToContinue == 'Y');
    
    //display
    cout << "\n You found "<< score << " times the searched number.";
    
    return 0;
}

/*************************
 * Define
 * this function generate random values into the array

**************************/

void generateRandomValue(int size, int randomArray[])
{
    int randomNumber;
    unsigned seed = time(0);
    srand(seed);
    
    for(int i = 0; i < size; i++)
    {
        randomNumber = rand() % (100 + 1);
        randomArray[i]= randomNumber;
    }
    
}


/*************************
 * Define
 * this function Search for a specific value in the array and return the number of time 
    it has find it.

**************************/

int searchNumberAndReturnScore(int userChosenNumber, int size, int randomArray[])
{

	int foundScore = 0;
	
	cout << "Enter a number to search for: ";
	cin >> userChosenNumber;

	for(int i =0; i < size; i++)
	{
		if (userChosenNumber == randomArray[i])
		{
			foundScore++;
		}
		
	}
	
	if(foundScore > 0)
	{
	    cout << "found it\n";
	}
	else
	{
		cout << " not in the array\n";
	}
	return foundScore;
}
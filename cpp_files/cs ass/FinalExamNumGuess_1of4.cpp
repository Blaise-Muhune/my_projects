/*********************************************************************************
 * Date: 12/9/2021
 * Name: Blaise Muhune
 * Class: CPTR-151
 * Description: This program generate a rondom number between 1-100 and 
                let the user guess and finish untill the user is correct.
**********************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //declare
	int number;
	int guessedNum; 
	int numberOfTrial= 0;
	char playAgain;
	
	//generate a random number to be guessed by the user
	unsigned seed = time(0);
    srand(seed);
    //populate
	number = rand() % 100 + 1; 
	
	cout << "Guess My Number Game "<<endl<<endl;
	
    do{
    	do
    	{
    	    //populate
    		cout << "Enter a guess between 1 and 100 : ";
    		cin >> guessedNum;
    		numberOfTrial++;
    
    		if (guessedNum > number)
    		    //display
    			cout << "Too high, try again"<<endl<<endl;
    			
    		else if (guessedNum < number)
    		    //display
    			cout << "Too low, try again"<<endl<<endl;
    			
    		else
    		    //display
    			cout << "congrats! you guessed after " << numberOfTrial << " trial(s)"<< endl;
    			
	    } while (guessedNum != number);
	    
	    cout << "Play again (Y/N): ";
	    cin >> playAgain;
	    cout <<endl<<endl<<endl<<endl;
	    
    } while(playAgain == 'y' || playAgain =='Y');

	return 0;
}
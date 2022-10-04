
/***********************
 * Name: Blaise
 * Date: 10/5/2021
 * Class: CPTR-151
 * Description: this program ask the user to enter each day deliveries and then perform
         the following: 
         - dispay each day deliveries.
         - compare the the deliveries and display the highiest and the lowest
         deliveries.
         - display the total and average of all deliveries.

************************/
#include <iostream>

using namespace std;

//declare
void getDeliveries(int [], int);
void displayDelivery(int [], int);
void highestLowest(int[], int);
void totalAndAverage(int [], int);


int main()
{
	int size =5;
	int deliveries[size];
	
	//da-call
	getDeliveries(deliveries, size);
	displayDelivery(deliveries, size);
	highestLowest(deliveries, size);
	totalAndAverage(deliveries, size);
	
	return 0;
}

/***********************
 * define
 * this function asked the used to enter daily delivery

************************/

void getDeliveries(int deliveries[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Enter Deliveries for day " <<(i+1) << ": ";
		cin >> deliveries[i];
	}
	cout << endl;
}

/***********************
 * define
 * this function dispay each day delivery

************************/

void displayDelivery(int deliveries[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "Deliveries for day " <<(i+1) << " is "<< deliveries[i] << endl;
	}
	cout << endl;
}

/***********************
 * define
 * this function compare all the value and display the lowest and the highist value

************************/
void highestLowest(int myDeliveries[], int size)
{
    //declare
	int high = myDeliveries[0];
	int highIndex =0;
	int low = myDeliveries[0];
	int lowIndex = 0;

	for(int i = 0; i < size; i++)
	{
	    //process
		if(high < myDeliveries[i])
		{
			high = myDeliveries[i];
			highIndex = i;
		}
		else if(low > myDeliveries[i])
		{
			low = myDeliveries[i];
			lowIndex = i;
		}
		
	}
	
	//display
	if(low == high)
	{
	    cout << "all the value seems to be '" << high << " deliveries' or \n something went wrong" << endl << endl;
	}
	else
	{
	    cout << "\nDay "<< highIndex+1 << " has the highiest deliveries of "<< high << endl;
    	cout << "Day "<< lowIndex+1 << " has the lowest deliveries of "<< low << endl;
	}
}

/***********************
 * define
 * this function calculate and display the total and average of all deliveries

************************/

void totalAndAverage(int deliveries[], int size)
{
    //declare
    double total;
    double average;
	for(int i = 0; i < size; i++)
	{
	    //process
		total += deliveries[i];
	}
	
	//process
	average = total/size;
	
	//display
	cout << "You have a total of "<< total << " deliveries"<< endl;
	cout << "And an average of " << average << " deliveries" << endl;
	cout << endl;
}

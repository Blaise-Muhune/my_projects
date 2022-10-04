//name: Blaise Muhune
//Date: 11/8/2021
//Class: CPTR-151
//Desc: this ask information about soccer player then display it and the best of them and the total of the score

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct teamPlayer
{
    string playerName;
    int playerNumber;
    int pointsScored;
};

int main()
{
    int arraySize = 6;
    teamPlayer players[arraySize];

    int totalPoints = 0;
    int highestScored;
    int index = 0;

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter the name of Player " << (i + 1) << ": ";
        getline(cin, players[i].playerName);

        cout << "Enter the number of Player " << (i + 1) << ": ";
        cin >> players[i].playerNumber;
    
        //while loop to ensure valid data is entered
        while(players[i].playerNumber < 0)
        {
            cout << "Invalid input." << endl;
            cout << "Please enter a new positive value: ";
            cin >> players[i].playerNumber;
        }

        cout << "Enter the number of points scored by player " << (i + 1) << ": ";
        cin >> players[i].pointsScored;

        //while loop to ensure valid data is entered
        while(players[i].pointsScored < 0)
        {
            cout << "Invalid input." << endl;
            cout << "Please enter a new positive value: ";
            cin >> players[i].pointsScored;
        }

        cin.ignore();
        cout << endl;
    }

    cout << "The Team: " << endl;
    cout << "Name"  << setw(22)<< "Number" <<setw(22)  << "Points Scored" << endl;
    cout << "________________________________________________" << endl;

    for(int i = 0; i < arraySize; i++)
    {
        cout << setw(22) << left << players[i].playerName;
        cout << setw(22) << left << players[i].playerNumber;
        cout << setw(22) << left << players[i].pointsScored;

        cout << endl;
    
        totalPoints += players[i].pointsScored;
    }
    int high = players[0].pointsScored;
    int highIndex = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if(players[i].pointsScored > high)
        {
            high = players[i].pointsScored;
            highIndex = i;
        }
    }
    
    
    cout << "total points: " << totalPoints<< endl;
    cout << "Player " << players[highIndex].playerName << " , number "<< players[highIndex].playerNumber << " has the highest score of " << high;
    cout << endl;
}

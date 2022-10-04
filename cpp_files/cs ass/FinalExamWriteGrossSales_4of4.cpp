//Date: 12/8/2021
//Class: CPTR-151
//Name: Blaise Muhune
//Description: this program create a file and ask the user to fill it with 5 sales

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  // declare
  int array[5];
  ofstream outputFile;

  outputFile.open("grossDailySales.txt");

  cout << "Now writing names to the file.";
  cout << endl;

  for( int i = 0; i < 5; i++){

    //populate
    cout << "enter a sale: ";
    cin >> array[i];
    outputFile << array[i] << endl;
  }

  outputFile.close();

  //display
  cout << "We're done here !";

return 0;
}
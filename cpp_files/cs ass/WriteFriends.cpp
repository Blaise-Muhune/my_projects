//Date: 11/30/2021
//Class: CPTR-151
//Name: Blaise Muhune
//Description: this program create a file with my friend names.

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
  // declare
  ofstream outputFile;

  outputFile.open("fiendNames.txt");

  cout << "Now writing names to the file.";

  outputFile << "Dumisani\n";
  outputFile << "Josh\n";
  outputFile << "Arciel\n";
  outputFile << "Elise\n";
  outputFile << "Cornaline\n";

  outputFile.close();

  cout << "We're done here.";

return 0;
}
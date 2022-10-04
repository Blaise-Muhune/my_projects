//Date: 11/30/2021
//Class: CPTR-151
//Name: Blaise Muhune
//Description: this program read the text in friendNames.txt 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
 string name;

 ifstream inputFile;

inputFile.open("FiendNames.txt");
cout << "Reading data from the file.";

inputFile >> name;
cout << name << endl;

inputFile >> name;
cout << name << endl;

inputFile >> name;
cout << name << endl;

inputFile >> name;
cout << name << endl;

inputFile >> name;
cout << name << endl;

inputFile.close();
return 0;
}
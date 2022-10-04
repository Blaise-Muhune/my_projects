//Date: 12/8/2021
//Class: CPTR-151
//Name: Blaise Muhune
//Description: this program read the sales from grossDailySales.txt and calculate the average and total of sales, the high and low sale.

#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
 // declare
 double sale;
 double total =0;
 double array[5];
 double high = array[0];
 double low = array[0];


 ifstream inputFile;

inputFile.open("grossDailySales.txt");
cout << "Reading data from the file.";
cout << endl;

//populate from the file
for (int i = 0; i < 5; i++){
  inputFile >> sale;
  cout << sale << endl;
  array[i] = sale;
  total += array[i];
}

cout << "You had a total sales of "<< total << endl;
cout << "you have an average of " << total/5 << endl;


// look for the highest and the lowest sale
for(int i = 0; i < 5; i++)
{
  if(high < array[i])
  {
    high = array[i];
  }
  if(low > array[i] )
  {
    low = array[i];
  }
}

//display
cout << "The highest sale is " << high <<endl;
cout << "The lowest sale is " << low << endl << endl;


inputFile.close();
return 0;
}
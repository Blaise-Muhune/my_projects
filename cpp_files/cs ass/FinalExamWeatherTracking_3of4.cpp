/******************************************************************************************************
 * Date: 12/10/2021
 * Name: Blaise Muhune
 * Class: CPTR-151
 * Description: This program ask the user about the rainfall and high-low temperature of every month
                the calculate and display the the averages and the high and low temperature of the year.
**********************************************************************************************************/
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

struct Weather{
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

int main() {
    
    /**********-DECLARE-************/          

    int arraySize = 2;
    int array[arraySize];
    double totalRainfall;
    double averageRainfall;
    double totalOfAverageTemp;
    double high;
    double low;
    char comeAgain;
    
    Weather weatherForMonth[arraySize];
    /************-END-***************/          

    
    /*
    unsigned seed = time(0);
    srand(seed);
    */
    
    do{
      //initialize
      totalRainfall = 0;
      averageRainfall = 0;
      totalOfAverageTemp = 0;
        
      for(int i = 0; i < arraySize; i++)
      {
    /************************-POPULATE-***************************/ 
    cout << "~~~MONTH " << i+1 <<"~~~~" << endl << endl;
          cout << "Enter the high temperature: ";
          cin >> weatherForMonth[i].highTemperature;
          cout << endl;
          
          cout << "Enter the low temperature: ";
          cin >> weatherForMonth[i].lowTemperature;
          cout << endl;
          cout << "Enter the total rainfall of the month: ";
          cin >> weatherForMonth[i].totalRainfall;
          cout << endl;
    /**************************-END-*********************************/

    /****************************************************-PROCESS-***************************************************************/
          
          weatherForMonth[i].averageTemperature = (weatherForMonth[i].highTemperature + weatherForMonth[i].lowTemperature)/2;
          cout <<endl;
    /*******************************************************-END-*********************************************************************/

      
          
      }
      
      high = weatherForMonth[0].highTemperature;
      low = weatherForMonth[0].lowTemperature;

      for(int i = 0; i <arraySize; i++)
      {
    /************************-PROCESS-***************************/                  
        totalRainfall += weatherForMonth[i].totalRainfall;
        averageRainfall = totalRainfall/arraySize;
        totalOfAverageTemp += weatherForMonth[i].averageTemperature;
    /**************************-END-*****************************/          

    /******************-FIND-HIGH-&-LOW-TEMP-********************/          
        if(high < weatherForMonth[i].highTemperature)
          high = weatherForMonth[i].highTemperature;
        if(low > weatherForMonth[i].lowTemperature)
          low = weatherForMonth[i].lowTemperature;
      }
    /*************************-END-***************************/          
      
    /****************************************************-DISPLAY-*********************************************************************/

  cout << "Month " << setw(15) << "Rainfall" << setw(15) << "Low temp" << setw(15) << "High temp" << setw(15) << "Average temp" << endl;
  cout << "----- " << setw(15) << "--------" << setw(15) << "---------" << setw(15) << "--------" << setw(15) << "------------" << endl;

    for(int i = 0; i <arraySize; i++)
    {
      cout << i+1 << setw(15) << weatherForMonth[i].totalRainfall << setw(15) << weatherForMonth[i].lowTemperature << setw(15) 
      << weatherForMonth[i].highTemperature << setw(15) << weatherForMonth[i].averageTemperature << endl << endl;
    }
    cout <<"\n\n--------------------------------------" << endl;
    cout << "The highest temperature is " << high << endl;
    cout << "The lowest temperature is " << low << endl;
    cout << "The average temperature of all average temperature is " << totalOfAverageTemp/arraySize << endl;
    cout <<"--------------------------------------" << endl << endl;

    /********************************************************-END-***********************************************************************/

    
    cout << "continue (Y/N): ";
    cin >> comeAgain;
    cout <<endl<<endl<<endl;
  
}while(comeAgain =='y' || comeAgain == 'Y');
    
    return 0;
}
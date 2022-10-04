/***************************************************************************************************
 * Date: 10/22/2021
 * Class: CPTR-151
 * Name: Blaise Muhune
 * Description: this program calculate the final grade given the homework, midterm and final weight
***************************************************************************************************/
#include <iostream>
using namespace std;

//declare
double weightAverage();
double total(double, double, double);

int main() {
    //declare
   double homework;
   double midterm;
   double finalTest;
   double totalGrade;
   
   //populate and duh-calls
   cout << "this section is for homework\n";
   cout << "_____________________________\n";
   homework = weightAverage();
   cout << "\n";
   cout << "this section is for midterm\n";
   cout << "_____________________________\n";
   midterm = weightAverage();
   cout << "\n";
   cout << "this section is for the final\n";
   cout << "_____________________________\n";
   finalTest = weightAverage();
   cout << "\n";
   
   //compute
   totalGrade = total(homework, midterm, finalTest);
   
   //display
   if(totalGrade >=95)
    {
        cout << "your grade is A";
    }else if(totalGrade >=90)
    {
        cout << "your grade is A-";
    }else if(totalGrade >=85)
    {
        cout << "your grade is B+";
    }else if(totalGrade >=80)
    {
        cout << "your grade is B";
    }else if(totalGrade >=75)
    {
        cout << "your grade is B-";
    }else if(totalGrade >=70)
    {
        cout << "your grade is C+";
    }else if(totalGrade >=65)
    {
        cout << "your grade is C";
    } else if(totalGrade >=60)
    {
        cout << "your grade is C-";
    }else if(totalGrade >=55)
    {
        cout << "your grade is D";
    }else
    {
        cout << "your grade is F";
    }
    
    return 0;
}

/*********************************************
 * Define
 * this function calculte the weigthed average
**********************************************/

double weightAverage()
{
    //declare
    double weightedAverage;
    double percentageCompleted;
    do
    {
        //populate
        cout << " Percentage completed in this section (not > 100 or < 1):";
        cin >> percentageCompleted;
    }
    while(percentageCompleted <1 || percentageCompleted > 100);
    
    //compute
    weightedAverage = percentageCompleted * 0.35;
    
    return weightedAverage;
}


/***********************************************************
 * Define
 * this function add the homework, midterm and the finalTest
**********************************************************/

double total(double homework, double midterm, double finalTest)
{
    //declare
    double total;
    
    //compute
    total = homework + midterm + finalTest;
    
    return total;
}
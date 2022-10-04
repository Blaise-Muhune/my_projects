//Blaise Muhune
//cptr-151
//12/5/2021

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //declare
    double number1;
    double number2;
    double total;
    int choice;
    cout << "Pick a number from 1 to 10: ";
    cin >> choice; 

    while(choice < 11 && choice > 0)
    {
        if(choice == 1){

        //populate
        cout  << "enter your number1: ";
        cin >> number1;
        cout << "Enter your number 2: ";
        cin >> number2;

        //process
        total = number1 + number2;

        //display
        cout << "your result is :" << total;
        cout << endl;

    }else if(choice == 2){

        //populate
        cout  << "enter your number1: ";
        cin >> number1;
        cout << "Enter your number 2: ";
        cin >> number2;

        //process
        total = number1 - number2;

        //display
        cout << "your result is :" << total;
        cout << endl;

    }else if(choice == 3){

        //populate
        cout  << "enter your number1: ";
        cin >> number1;
        cout << "Enter your number 2: ";
        cin >> number2;

        total = number1 * number2;

        //display
        cout << "your result is :" << total;
        cout << endl;

    }else if(choice == 4){

        //populate
        cout  << "enter your number1: ";
        cin >> number1;
        cout << "Enter your number 2: ";
        cin >> number2;

        total = number1 / number2;

        //populate
        cout << "your result is :" << total;
        cout << endl;

    }else if(choice == 5){
        //populate
        cout  << "enter your number1: ";
        cin >> number1;
        cout << "Enter your number 2: ";
        cin >> number2;
        total = pow(number1, number2);
        cout << " your result is :" << total;
    }
        else if(choice == 6)
        {
            //populate
            cout << "What is number 1? ";
            cin >> number1;
            cout << "The square root of " << number1 << " is " << sqrt(number1) << endl << endl;
        }
        else if(choice == 7)
        {
            //declare
            double radius;
            double area;
            double PI = 3.14159;

            //populate
            cout << "What is the raidus? ";
            cin >> radius;
            cout << "The area is: " << (area = PI * radius * radius) << std::endl << std::endl;
        }
        else if(choice == 8)
        {
            //declare
            int length;
            int width;
            int areaOfRectangle;
        
            //populate
            cout << "Enter Length: ";
            cin >> length;
            cout << "Enter Width: ";
            cin >> width;
        
        
            //display
            cout << "The area is: " << (length * width) << endl << endl;
        }
        else if(choice == 9)
        {
            //declare
            double area;
            double base;
            double height;

            //display
            cout << "The area is: " << (area = base * height * 0.5) << endl << endl;
        }
        else if(choice == 10)
        {
            cout << "you exit..."<< endl;
            break;
        }

        cout << "Pick a number from 1 - 10: ";
        cin >> choice;
    }
}
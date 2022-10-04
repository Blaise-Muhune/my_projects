/*****************************************************************
 * Date: 11/3/2021
 * Class: CPTR-151
 * Name: Blaise Muhune
 * Desc: this program calculate the area of a circle
*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

struct Circle

{

  double radius;
  double diameter;
  double area;

};

int main() {
    //declare
    Circle object;
    double PI = 3.14159;
    
    //populate
    cout << "what is the diameter ? ";
    cin>> object.diameter;
    cout <<endl;
    
    //process
    object.radius = object.diameter/2.0;
    
    object.area = PI * pow(object.radius, 2.0);
    
    //display
    cout << "the area is: " << object.area;
    return 0;
}

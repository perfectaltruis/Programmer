// Program to find the area of the circle
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main(){

    // variables
    double radius;
    const double PIE = 3.14;

    // user inputs
    cout << "What is the radius of the circle: \t";
    cin >> radius;

    double area = PIE * radius * radius;
    double circumference = PIE * radius;

    cout << "The radius of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
}
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    // variables
    double radius;
    const double PI = 3.14;

    // User inputs
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate volume
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    cout << "calculating.....\n" << endl;
    sleep(3); // waiting for the 3 seconds
    // Output the result
    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}
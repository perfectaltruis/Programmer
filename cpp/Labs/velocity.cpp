#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance;
    char distance_unit;
    double time_traveled;
    char time_unit;

    // user inputs
    cout << "Distance Travelled: ";
    cin >> distance;

    cout << "Distance in k or m: ";
    cin >> distance_unit;

    cout << "Time used to travel: ";
    cin >> time_traveled;

    if (distance_unit == 'k') {
        distance *= 1000; // Convert kilometers to meters
    } else if (distance_unit != 'm') {
        cout << "Distance can only be in km or m" << endl;
        return 1; // Exit program with error code
    }

    cout << "Time in s or h: ";
    cin >> time_unit;

    if (time_unit == 'h') {
        time_traveled *= 3600; // Convert hours to seconds
    } else if (time_unit != 's') {
        cout << "Time can only be in s or h" << endl;
        return 1; // Exit program with error code
    }

    double velocity = distance / time_traveled;
    cout << fixed << setprecision(3); // display 3 decimal places
    cout << "Velocity is: " << velocity << endl;

    return 0;
}

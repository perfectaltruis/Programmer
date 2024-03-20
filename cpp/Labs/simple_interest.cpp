#include <iostream> // input and output functions
#include <string> // string header file
#include <unistd.h> // time header file for sleeping
#include <iomanip> // for std::steprecision

using namespace std;

int main(){

    // variables 
    double principal_amount;
    double period_to_invest;
    double rate_of_investiment;
    char time_unit;

    // user inputs
    cout << "Enter a Principal Amount: \t";
    cin >> principal_amount;

    cout << "Time to invest your amount: \t";
    cin >> period_to_invest;

    cout << "Did you invest in month or year?....\n\'m\' for month and \'y\' in year: \t";
    cin >> time_unit;

    cout << "The rate of your investiment: \t";
    cin >> rate_of_investiment;

    if(time_unit == 'm'){
        period_to_invest /= 12.0;
    } else if(time_unit != 'y'){
        cout << "Time should be in y or m" << endl;
        return 1;
    }

    double amount = principal_amount * period_to_invest * (rate_of_investiment / 100);
    sleep(3); // sleep the program for 3 seconds

    cout << fixed << setprecision(3); // set output to display 3 decimal place
    cout << "The amount earned is: " << amount << endl;
} 
#include <iostream>
#include <string>
#include <unistd.h>
 
using namespace std;

int main(){
    // variables
    double original_price;
    double discount_rate;

    // user inputs
    cout << "Enter the price of the item: \t";
    cin >> original_price;

    cout << "What is the discount rate offered to the price: \t";
    cin >> discount_rate;

    double discount_amount = original_price *(discount_rate / 100.0);
    cout << "calculating...." << endl;
    sleep(3);
    cout << "\nTotal Price After Discount is: \t" << discount_amount;
}
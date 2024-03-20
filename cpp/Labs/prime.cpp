#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main(){
    int initial_number, final_number;

    // user inputs
    cout << "Enter an initial number: \t";
    cin >> initial_number;

    cout << "Enter a final number: \t";
    cin >> final_number;

    // initial number should be less than final number
    if (initial_number > final_number){
        cout << "Initial Number must be less than Final Number!";
        return 0;
    }

     // Pause for 3 seconds before printing prime numbers
    sleep(3);


    // Check if the current_number is divisible by any number from 2 to its square root
    for(int current_number = initial_number; current_number <= final_number; current_number++){
        bool prime = true;

        for(int divisor = 2; divisor * divisor <= current_number; divisor++){
            if(current_number % divisor == 0){
                prime = false; // If divisible, the current_number is not prime
                break; // No need to continue checking
            }
        }

        // Output the result based on 
        //whether the current_number is prime or not
        if(prime){
            cout << current_number << ": is a prime number" << endl;
        }
    }
}
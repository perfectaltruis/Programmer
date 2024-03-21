#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    // variables
    int initial_number;
    int final_number;

    // User inputs for initial and final numbers
    cout << "Enter the initial number: ";
    cin >> initial_number;

    cout << "Enter the final number: ";
    cin >> final_number;

    char options;

    // Displaying the options for the user
    cout << "\n";
    cout << "\tChoose the Option:" << endl;
    cout << "\t1: Even Number. 2: Odd Number. 3: Prime Number" << endl;
    cout << "Enter the option to identify the number: ";
    cin >> options;

    // Option selection
    if (options == '1') {
        // Checking if initial number is greater than final number
        if (initial_number > final_number) {
            cout << "Initial Number cannot be larger than final number" << endl;
        } else {
            // Finding and displaying even numbers within the range
            cout << "\n";
            cout << "EVEN NUMBERS ARE: " << endl;
            cout << "finding....." << endl;
            sleep(3);
            for (int value = initial_number; value <= final_number; value++) {
                if (value % 2 == 0) {
                    cout << value << " is an even number" << endl;
                }
            }
        }
    } else if (options == '2') {
        // Checking if initial number is greater than final number
        if (initial_number > final_number) {
            cout << "Initial number cannot be greater than the final number" << endl;
        } else {
            // Finding and displaying odd numbers within the range
            cout << "\n" << endl;
            cout << "ODD NUMBERS ARE:_____" << endl;
            cout << "finding.....\n" << endl;
            sleep(3);
            for (int value = initial_number; value <= final_number; value++) {
                if (value % 2 != 0) {
                    cout << value << " is an odd number" << endl;
                }
            }
        }
    } else if (options == '3') {
        // Checking if initial number is greater than final number
        if (initial_number > final_number) {
            cout << "Initial number cannot be greater than the final number" << endl;
        } else {
            
            // Finding and displaying prime numbers within the range
            cout << "\n";
            cout << "PRIME NUMBERS ARE______" << endl;
            cout << "finding......\n" << endl;
            sleep(3);

            // Flag to track if any prime number is found
            bool found_prime = false;
            for (int value = initial_number; value <= final_number; value++) {
                bool prime = true;
                for (int divisor = 2; divisor * divisor <= value; divisor++) {
                    if (value % divisor == 0) {
                        prime = false;
                        break;
                    }
                }
                if (prime && value > 1) {
                    cout << value << " is a prime number" << endl;
                    found_prime = true;
                }
            }
            // Display message if no prime numbers are found
            if (!found_prime) {
                cout << "No prime numbers found in the specified range" << endl;
            }
        }
    } else {
        // Error: invalid option
        cout << "Invalid option! Please choose 1, 2, or 3." << endl;
    }

    return 0;
}

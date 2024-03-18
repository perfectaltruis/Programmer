// USER INPUTS IN C++:


/*
In C++, you can read input from the user using
the cin object, which is part of the iostream library. 
Here's a basic example of how to read user input in C++:
*/

#include <iostream>
using namespace std;

int main() {
    int numeral;
    cout << "Enter a number: ";
    
    // Read input from the user and store it in the variable 'num'
    cin >> numeral;
    cout << "The number You entered is:  " << numeral << endl;
    
    return 0;
}
/*
In this example:

    We include the iostream header file to use the input/output stream objects.
    We declare an integer variable num to store the user input.
    We use cout to prompt the user to enter a number.
    We use cin to read the user input and store it in the variable num.
    We use cout again to display the value entered by the user.

When you run this program, it will wait for the user to input a number. 
After the user enters a number and presses Enter, the program will display 
the entered number back to the user.

*/
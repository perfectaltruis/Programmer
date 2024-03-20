#include <iostream> // input and output
#include <string> // strings functions
#include <unistd.h> // for sleep function

using namespace std;

int main(){
    int initial_number, final_number;

    // user inputs
    cout << "Enter the first number: \t";
    cin >> initial_number;

    cout << "Enter the last number: \t";
    cin >> final_number;

    cout << "Odd numbers are: " << endl;

    if(initial_number > final_number){
        cout << "initial number shouldn\'t be greater than final number!" << endl;
    }

    // Finding the odd number.
    for (int value = initial_number; value <= final_number; value++){
        if(value % 2 == 1){
            // Sleep for 5 seconds
            sleep(3);

            cout << value << ": is an odd number." << endl;
        }
    }
}


/*
    #include <unistd.h>: This line is a preprocessor directive in C and C++ 
    that tells the compiler to include the contents of the <unistd.h> header file. 
    This header file is part of the Unix Standard Library and provides access to various 
    POSIX (Portable Operating System Interface) system calls, including the sleep() function.

    sleep(): This is a function provided by the <unistd.h> header file. It pauses the
     execution of the program for a specified number of seconds. In this context, sleep() 
     is used to introduce a delay of 5 seconds before each odd number is printed in the loop.

In summary, #include <unistd.h> is used to include the header file that contains the sleep() 
function, allowing the program to use this function to introduce delays in its execution.
*/
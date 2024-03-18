// SENTENCESE OR INPUT STRINGS IN C++ 

// We learned about userinputs in inputs.cpp in chapter one
// but in c++ it is possible to use the extraction >> on cin to store a string entered by the user
// However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means 
// that it can only store a single word (even if you type many words):

//  That's why, when working with strings, we often use the getline() function 
//  to read a line of text. It takes cin as the first parameter, and the string variable as second:

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare a string variable named 
    // 'fullName' to store the user's input
    string fullName;

    // Prompt the user to type their full name
    cout << "Type your full name: "; 
    // Read a line of text (including spaces) 
    // from the standard input (cin) and store it in 'fullName'
    getline(cin, fullName); 
    cout << "Your name is: " << fullName; // Output the entered full name
    return 0; // Return 0 to indicate successful termination of the program
}


//     string fullName;: Declares a string variable named fullName to store the user's input.
//     cout << "Type your full name: ";: Displays the message "Type your full name: " on the console.
//     getline(cin, fullName);: Reads a line of text from the standard input (cin) and stores it in the variable fullName. 
//     getline is used instead of cin >> fullName to read the entire line, allowing the user to input spaces.
//     cout << "Your name is: " << fullName;: Outputs the entered full name with the message "Your name is: ".
//     return 0;: Indicates that the program executed successfully and returns 0 to the operating system.
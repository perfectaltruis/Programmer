// CHARACTER DATA TYPE IN C++

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize char variables
    char my_char = 'A';
    char another_char = 65; // ASCII value of 'A'

    // Output char variables
    cout << "My car: " << my_char << endl;
    cout << "Another car: " << another_char << endl;

    // Char array (string)
    char my_string[] = "Hello";
    cout << "My string: " << my_string << endl;

    // Using escape sequences
    char newline = '\n';
    char tab = '\t';
    cout << "Newline: " << newline << endl;
    cout << "Tab: " << tab << endl;

    return 0;
}

/*
#include <iostream>
using namespace std;

int main() {

    #include <iostream>: This line includes the input/output stream 
    library, which provides functionality for basic input and output operations.
    using namespace std;: This line allows us to use names and objects from the 
    standard library (std) without prefixing them with std::.
    int main() {: This line defines the main function, the entry point of the program.

    // Declare and initialize char variables
    char my_char = 'A';
    char another_char = 65; // ASCII value of 'A'

    char my_char = 'A';: This line declares a variable 
    named my_char of type char and initializes it with the character 'A'.

    char another_char = 65;: This line declares a variable 
    named another_char of type char and initializes it with the ASCII value 65, 
    which corresponds to the character 'A'.


    // Output char variables
    cout << "my_char: " << my_char << endl;
    cout << "another_char: " << another_char << endl;

    cout << "my_char: " << my_char << endl;: This 
    line outputs the message "my_char: " followed by 
    the value of my_char (which is 'A') to the standard output stream (cout).
    cout << "another_char: " << another_char << endl;: This line outputs the message
    "another_char: " followed by the value of another_char (which is also 'A')
    to the standard output stream (cout).

    // Char array (string)
    char my_string[] = "Hello";
    cout << "my_string: " << my_string << endl;

    char my_string[] = "Hello";: This line declares a 
    character array named my_string and initializes it with the 
    string "Hello". In C++, a string is represented as an array of characters 
    terminated by a null character ('\0').

    cout << "my_string: " << my_string << endl;: This line outputs 
    the message "my_string: " followed by the value of my_string (which is the string "Hello") to the standard output stream (cout).

    // Using escape sequences
    char newline = '\n';
    char tab = '\t';
    cout << "Newline: " << newline << endl;
    cout << "Tab: " << tab << endl;

    char newline = '\n';: This line declares a variable named 
    newline of type char and initializes it with the newline character ('\n').
    char tab = '\t';: This line declares a variable named tab of type char and
     initializes it with the tab character ('\t').
    cout << "Newline: " << newline << endl;: This line outputs the message 
    "Newline: " followed by the newline character to the standard output stream (cout).
    cout << "Tab: " << tab << endl;: This line outputs the message "Tab: 
    " followed by the tab character to the standard output stream (cout).

    return 0;
}


    return 0;: This line indicates that the main function has successfully 
    executed and returns an exit status of 0, indicating successful termination 
    of the program.  
*/

//IF YOU DID NOT UNDERSTAND ANYTHING HERE PLEASE KEEP LEARNING SOON YOU'LL UNDERSTAND IT

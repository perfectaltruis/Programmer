// ACCESS STRING IN C++
// Note: String indexes start with 0: 
// [0] is the first character. [1] is the second character, etc.


#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a string variable 
    // named 'message' with the value "Hello, World"

    string message = "Hello, World"; 
    cout << message << endl;

    // You can access the characters in a string by 
    // referring to its index number inside square brackets [].
    string greeting = "How are You?";
    cout << greeting[2] << endl; // output w

    //CHANGING STRING VALUES
    greeting[11] = '!'; // change ? to !
    cout << greeting;  // Output How are You! 

    // ESCAPE CHARACTER IN C++:
    
    // In C++, escape characters are special sequences of characters that 
    // represent non-printable or special characters when used within strings. 
    // They are preceded by a backslash \ to distinguish them from regular characters. 
    // Here are some commonly used escape characters in C++:

   // \n: Newline character. It moves the cursor to the beginning of the next line.
   // \t: Tab character. It inserts a horizontal tab.
   //  \": Double quote character. It allows you to include double quotes within a string.
   //  \': Single quote character. It allows you to include single quotes within a string.
   //  \\: Backslash character. It allows you to include backslashes within a string.

    cout << "This is a new line.\n"; // Newline character
    cout << "This is a tab\tcharacter.\n"; // Tab character
    cout << "This is a double quote: \"Hello\"\n"; // Double quote character
    cout << "This is a single quote: \'a\'\n"; // Single quote character
    cout << "This is a backslash: \\ \n"; // Backslash character
    return 0;
}

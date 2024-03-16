// COMMENTS IN C++
// comments in c++:
// Comments can be used to explain C++ code, and to make it more readable.
// It can also be used to prevent execution when testing alternative code. 
// Comments can be singled-lined or multi-lined.

// Types of comments:
// i: SINGLE LINE COMMETS: 
//      in C++ single line comments starts with two forward slashes //
//      single line comment can be placed at the end of a code of line
// ii: MULTI-LINE COMMENTS:
//      In C++ Multi-line comments start with /* and ends with */.
// ALL THE ABOVE ARE COMMENTS 

/* Single or multi-line comments?: It is up to you which you want to use. Normally, we use // for short comments,*/


// Output OR Printing text to the console
// To print a text to the console The 'cout' object together with << Operator is used to print or output value to the console
// You can use as many cout as possile but note that it does not start at a new line at the end of the output

#include <iostream>
using namespace std;

int main(){
    cout << "comments in C++ "; // note a space before "
    cout << "I'll learn more in c++ ";
    // there is no new line inserted at the end of the output
    // To insert a new line use a special character called escape sequence character
    // (\) backward slash like shown below:
    cout << "There is no new line here \n"; // Note \n at the end of the line just before ";
    cout << "This will start at a new line\n";
    cout << "\nI will start at a new line again"; // not \n at the start of the line

    // To make a sentence start at a new line just you may use 'endl' see example below:
    cout << "\nI have to use endl at the end of the line to make it start at a new line"<< endl; // Note << endl at the end of this line
    cout << "I'm starting from a new line"; 

    // Ther are more escape character like \t, \", and \\ for horizontal table, insert double quotes and insert backslash respectively.
    return 0;

    // Both \n and endl are used to break lines. However, \n is most used.
    // The newline character (\n) is called an escape sequence, and it forces 
    // the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

}
//  The semicolon after "comments in c++" marks the end of the output statement using cout,
//  while the semicolon after return 0 indicates the end of the return statement.
// CONSTANT  KEYWORD IN C++

/*
In C++, constants are used to define values that cannot 
be modified or changed during the execution of a program.
These values remain constant throughout the program's execution.
There are two main ways to define constants in C++:

    Using the const Keyword:
        Constants can be defined using the const 
        keyword followed by the data type and the constant name.
        Once initialized, the value of a const variable cannot be changed.

        example: 
const int MAX_VALUE = 100;
const float PI = 3.14159;

Using the #define Preprocessor Directive:

    The #define preprocessor directive defines a
    symbolic constant, which is essentially a text substitution. 
    It does not require a data type declaration.

    example: 
    #define MAX_VALUE 100
    #define PI 3.14159

Constants defined using const have the advantage of
 being type-safe and scoped to the block or function 
 where they are defined. On the other hand, #define constants are 
 simple text substitutions and do not have a specific data type 
 associated with them.


Here's an example demonstrating both methods:
*/

#include <iostream>
using namespace std;

int main() {
    // Using const keyword
    const int MAX_VALUE = 100;
    const float PI = 3.14159;

    // Using #define preprocessor directive
    #define MIN_VALUE 0
    #define GRAVITY 9.81

    cout << "Max value: " << MAX_VALUE << endl;
    cout << "Pi: " << PI << endl;
    cout << "Min value: " << MIN_VALUE << endl;
    cout << "Gravity: " << GRAVITY << endl;

    return 0;
}

// In this example, both const variables (MAX_VALUE and PI) and #define 
// constants (MIN_VALUE and GRAVITY) are defined and used in the program.
// When executed, the program will output the values of these constants.

// BOOLEANS DATA TYPE IN C++

/*
The booleans data type is declared by a 'bool' keyword.
The Boolean data type represents logical values, which can be either true or false
Booleans are mainly used in control statements and conditional statements and logical
expressions to control program flow.
*/

#include <iostream>
using namespace std;

int main() {
    bool is_raining = true;
    bool is_sunny = false;

    // Conditional statements using bool variables
    if (is_raining) {
        cout << "Take an umbrella." << endl;
    } else {
        cout << "No need for an umbrella." << endl;
    }

    if (is_sunny) {
        cout << "Wear sunglasses." << endl;
    } else {
        cout << "No need for sunglasses." << endl;
    }

    // Logical expressions
    bool is_weekend = true;
    bool is_holiday = false;

    bool can_go_oout = is_sunny && ! is_raining && (is_weekend || is_holiday);
    if (can_go_oout) {
        cout << "You can go out and enjoy the weather!" << endl;
    } else {
        cout << "Better stay indoors for now." << endl;
    }

    return 0;
}

// EXPLANATION OF THE CODE ABOVE:
//    We declare Boolean variables is_raining and is_sunny, 
//    assigning them the values true and false, respectively.

//    We use these Boolean variables in conditional statements 
//    (if statements) to make decisions based on their values.

//    We also use logical operators (&&, !, ||) to combine 
//    Boolean expressions and evaluate complex conditions.
//    Finally, we print out messages based on the evaluation of these conditions.

// OUTPUT WILL BE:
// Take an umbrella.
// No need for sunglasses.
// Better stay indoors for now.

// ARITHMETIC OPERATORS IN C++
// In C++ programming language, operators are symbols that are used to perform operations on operands. 
// Operators can be classified into several categories based on their functionality.

// Arithmetic Operators: These operators are used to perform arithmetic operations such as addition, subtraction, multiplication, division, and modulus.

//    Addition (+)
//    Subtraction (-)
//    Multiplication (*)
//    Division (/)
//    Modulus (%)

// EXAMPLE:
#include <iostream>

using namespace std;

int main() {
    int first_number = 10, second_number = 5;

    int summation = first_number + second_number; // Addition
    int difference = first_number - second_number; // Subtractions
    int product = first_number * second_number; // Multiplication
    int Quotient = first_number / second_number; // Division
    int reminder = first_number % second_number; // Modulus

    // Output the values
    cout << "Summation: " << summation << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << Quotient << endl;
    cout << "Reminder: " << reminder << endl;

    return 0;
}

/*
    summation: This variable holds the result of adding first_number and second_number.
    difference: This variable holds the result of subtracting second_number from first_number.
    product: This variable holds the result of multiplying first_number and second_number.
    Quotient: This variable holds the result of dividing first_number by second_number.
    reminder: This variable holds the remainder when first_number is divided by second_number.
*/

// This code will output the calculated values of the variables 
// summation, difference, product, Quotient, and reminder.
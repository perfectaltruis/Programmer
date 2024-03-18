#include <iostream>

using namespace std;

int main() {
    int starting_value = 15;
    
    // Perform assignment operations
    starting_value += 5;  // Equivalent to starting_value = starting_value + 5
    int result_addition = starting_value;  // Save the result of the addition operation for output
    starting_value -= 3;  // Equivalent to starting_value = starting_value - 3
    int result_subtraction = starting_value;  // Save the result of the subtraction operation for output
    starting_value *= 2;  // Equivalent to starting_value = starting_value * 2
    int result_multiplication = starting_value;  // Save the result of the multiplication operation for output
    starting_value /= 4;  // Equivalent to starting_value = starting_value / 4
    int result_division = starting_value;  // Save the result of the division operation for output

    // Output the value of starting_value after each assignment operation
    cout << "Value of starting_value after += operation: " << result_addition << endl;  // Expected: 20
    cout << "Value of starting_value after -= operation: " << result_subtraction << endl;  // Expected: 17
    cout << "Value of starting_value after *= operation: " << result_multiplication << endl;  // Expected: 34
    cout << "Value of starting_value after /= operation: " << result_division << endl;  // Expected: 8

    return 0;
}

/*
Explanation:

    starting_value is initially assigned the value 15.
    Four assignment operations are performed on starting_value using the +=, -= , *=, and /=
    operators to add, subtract, multiply, and divide it respectively. The results of each 
    operation are stored in separate variables named result_addition, result_subtraction, 
    result_multiplication, and result_division. 
    
    These variables are then used to output the value of starting_value after each assignment 
    operation using cout statements.

This code will output the correct values of starting_value after each assignment operation. 
*/
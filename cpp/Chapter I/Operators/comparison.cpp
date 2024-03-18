// COMPARISON OPERATOR IN C++ 

/*
comparison operators are used to compare two or more values 
and return a boolean result (true or false)
    Equal to (==): Returns true if the operands are equal, otherwise false.
    Not equal to (!=): Returns true if the operands are not equal, otherwise false.
    Greater than (>): Returns true if the left operand is greater than the right operand, otherwise false.
    Less than (<): Returns true if the left operand is less than the right operand, otherwise false.

    Greater than or equal to (>=): Returns true if the left operand is greater than or equal to the right operand, otherwise false.
    Less than or equal to (<=): Returns true if the left operand is less than or equal to the right operand, otherwise false.
*/
#include <iostream>

using namespace std;

int main() {
    int first_number = 10, second_number = 5;

    // Using comparison operators
    int are_numbers_equal = (first_number == second_number);
    int are_numbers_not_equal = (first_number != second_number);
    int is_first_greater = (first_number > second_number);
    int is_first_less = (first_number < second_number);
    int is_first_greater_or_equal = (first_number >= second_number);
    int is_first_less_or_equal = (first_number <= second_number);

    // Output the results
    cout << "Are numbers equal?_____ " << are_numbers_equal << endl;  // Expected: 0 (false)
    cout << "Are numbers not equal?_____ " << are_numbers_not_equal << endl;  // Expected: 1 (true)
    cout << "Is first number greater?_____ " << is_first_greater << endl;  // Expected: 1 (true)
    cout << "Is first number less?_____ " << is_first_less << endl;  // Expected: 0 (false)
    cout << "Is first number greater or equal?_____ " << is_first_greater_or_equal << endl;  // Expected: 1 (true)
    cout << "Is first number less or equal?_____ " << is_first_less_or_equal << endl;  // Expected: 0 (false)

    return 0;

}

/*
    The variables are_numbers_equal, are_numbers_not_equal, 
    is_first_greater, is_first_less, is_first_greater_or_equal, 
    and is_first_less_or_equal are of type int, which will hold 
    the integer value 0 for false and 1 for true.

    These variables are used to store the results of each comparison operation.
    The results are output using cout statements.
*/

/*
    Descriptive names such as first_number, second_number, 
    are_numbers_equal, etc., are used to improve code readability.
    Snake_case convention is followed for variable names.
    Comparison operators (==, !=, >, <, >=, <=) are used to compare 
    first_number and second_number.
    Boolean variables are used to store the results of each comparison.
    The results of the comparisons are then output using cout statements.

    This example demonstrates the usage of comparison operators in C++ with
    descriptive names and snake_case convention. Let me know if you need further clarification!
*/
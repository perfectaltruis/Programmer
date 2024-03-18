// LOGICAL OPERATORS IN C++

/*
Logical operators in programming are used to combine multiple 
conditions and make decisions based on the result of these combinations. 
They allow you to create complex conditions by joining simpler ones. 
These operators are crucial for controlling the flow of your program, 
making decisions, handling errors, and optimizing code efficiency. 
By using logical operators, you can construct conditional statements that
execute different blocks of code depending on whether certain conditions are met or not.

Overall, logical operators play a vital role in writing clear, 
concise, and efficient code in programming languages.
*/

#include <iostream>

using namespace std;

int main() {
    int number = 25;
    int lower_limit = 10;
    int upper_limit = 30;

    // Using logical operators
    bool is_within_range = (number >= lower_limit) && (number <= upper_limit);

    // Output the result
    cout << "Is the number within the range? " << is_within_range << endl;  // Expected: 1 (true)

    return 0;
}

/*
    We have three variables: number, lower_limit, and upper_limit.
    We want to check if number falls within the range defined by lower_limit and upper_limit.
    We use the logical AND (&&) operator to check if number is greater than or equal to 
    lower_limit AND less than or equal to upper_limit.

    The result is stored in the boolean variable is_within_range.
    Finally, we output the result using cout.

    This example demonstrates the usage of logical operators (&& in this case) to combine conditions in C++.
*/
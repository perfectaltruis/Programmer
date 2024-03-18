// NUMERIC DATA TYPE IN C++

/*
In C++, numeric data types are used to represent numerical values. 
The main numeric data types include int, float, and double. 

Here's an explanation of each:

    int: The int data type is used to store integer values, which are whole numbers
    without any decimal point. int typically occupies 4 bytes of memory on most systems 
    and can represent values within a certain range, which depends on the system architecture.

    EXAMPLE:
    int myInteger = 10;
    
    float: The float data type is used to store single-precision floating-point values.
    It is used when you need to represent numbers with decimal points. float typically 
    occupies 4 bytes of memory and can represent values with approximately 7 significant 
    digits.

    EXAMPLE: 
    float myFloat = 3.14;

    double: The double data type is used to store double-precision floating-point 
    values. It provides higher precision compared to float and is used when you need 
    to represent numbers with higher precision. double typically occupies 8 bytes of 
    memory and can represent values with approximately 15 significant digits.

    EXAMPLE:
    double myDouble = 3.14159265358979;

    NUMERIC DATA TYPE CONVERSION IN C++:

    Now, regarding converting one numeric data type to another:
    IMPLICIT CONVERSION:C++ allows for implicit conversion from int to float and double, 
    and from float to double. This means you can assign an int value to a float or double 
    variable without any explicit conversion.

    EXAMPLE:
    int myInteger = 10;
    float myFloat = myInteger;   // Implicit conversion from int to float
    double myDouble = myFloat;   // Implicit conversion from float to double

    EXPLICIT CONVERSION(Type Casting): If you need to convert from a higher precision 
    type to a lower precision type, or if you want to ensure a certain type is used, 
    you can use explicit type casting.

    EXAMPLE:
    double myDouble = 3.14;
    int myInteger = static_cast<int>(myDouble);   // Explicitly cast double to int

    This way, you explicitly convert a double value to an int, but note that this may 
    result in loss of precision.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables of different numeric data types
    int myInteger = 15;
    float myFloat = 3.14;
    double myDouble = 3.14159265358979;

    // Display the values of the variables
    cout << "Integer value: " << myInteger << endl;
    cout << "Float value: " << myFloat << endl;
    cout << "Double value: " << myDouble << endl;

    // Convert int to float and double (implicit conversion)
    float convertedFloat = myInteger;
    double convertedDouble = myInteger;

    cout << "Converted int to float: " << convertedFloat << endl;
    cout << "Converted int to double: " << convertedDouble << endl;

    // Convert float to double (implicit conversion)
    double doubleFromFloat = myFloat;
    cout << "Converted float to double: " << doubleFromFloat << endl;

    // Explicit conversion (type casting) from double to int
    int intFromDouble = static_cast<int>(myDouble);
    cout << "Converted double to int (using static_cast): " << intFromDouble << endl;

    return 0;
}

// The precision of a floating point value indicates how many digits the value can 
// have after the decimal point. The precision of float is only six or seven decimal 
// digits, while double variables have a precision of about 15 digits. Therefore it is 
// safer to use double for most calculations.
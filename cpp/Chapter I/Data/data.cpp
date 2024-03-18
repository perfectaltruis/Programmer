// DATA TYPE IN C++

/*

In C++, data types specify the type of data 
that a variable can store. Each data type has a 
specific range of values and operations that can
 be performed on it. Here are the commonly used data types in C++:

    Integer Types:
        int: Used to store integer values (whole numbers).
        short: Short integer, typically smaller range than int.
        long: Long integer, typically larger range than int.
        long long: Longer integer, with even larger range than long.

    Floating-Point Types:
        - float: Single-precision floating-point number.
        - double: Double-precision floating-point number,
          providing higher precision than float.
        - long double: Extended-precision floating-point number, 
        - offering even higher precision than double.

    Character Types:
        - char: Used to store single characters.
        - char16_t or char32_t: Unicode characters
          (UTF-16 or UTF-32 encoding).
        -   wchar_t: Wide character, typically used for 
            Unicode characters (UTF-16 or UTF-32 encoding).

    Boolean Type:
        bool: Used to store boolean values, true or false.

    Void Type:
        void: Represents the absence of type.
        Typically used as the return type of
        functions that do not return a value.

    Enumerated Types:
        enum: User-defined data type consisting 
        of a set of named integer constants.

        example: 
        enum Color { RED, GREEN, BLUE };
        Color myColor = RED;

Derived Types:

    Pointers (*): Holds memory address of another variable.
    References (&): Alias to another variable.
    Arrays ([]): Collection of elements of the same data type.
    Structures (struct): User-defined data type that groups related variables.
    Union (union): Similar to struct but all members share the same memory location.
    Classes (class): Blueprint for creating objects with methods and attributes.

User-Defined Types:

    typedef: Allows creating aliases for existing data types.

cpp

    typedef int Number;
    Number num = 10;

These are the basic data types available in C++.
Choosing the appropriate data type depends on the 
range of values you need to store and the operations you plan to perform on the data.
*/



#include <iostream>
using namespace std;

int main() {
    // Integer types
    int integerNumber = 42;
    short shortNumber = 10;
    long longNumber = 1234567890;
    long long veryLongNumber = 1234567890123456789LL;

    // Floating-point types
    float floatNumber = 3.14f;
    double doubleNumber = 3.141592653589793;
    long double longDoubleNumber = 3.1415926535897932384626433832795L;

    // Character types
    char charVariable = 'A';
    char16_t unicodeChar = u'\u03A9';
    char32_t unicodeChar32 = U'\U0001F603';
    wchar_t wideChar = L'♥';

    // Boolean type
    bool boolVariable = true;

    // Enumerated type
    enum Color { RED, GREEN, BLUE };
    Color myColor = RED;

    // Pointers
    int* ptr = nullptr;

    // References
    int num = 10;
    int& ref = num;

    // Arrays
    int arr[5] = {1, 2, 3, 4, 5};

    // Structures
    struct Point {
        int x;
        int y;
    };
    Point p;
    p.x = 10;
    p.y = 20;

    // Union
    union Number {
        int intValue;
        float floatValue;
    };
    Number numUnion;
    numUnion.intValue = 42;

    // Classes (Not demonstrated in this example)

    // Output variables
    cout << "Integer: " << integerNumber << endl;
    cout << "Short: " << shortNumber << endl;
    cout << "Long: " << longNumber << endl;
    cout << "Very Long: " << veryLongNumber << endl;

    cout << "Float: " << floatNumber << endl;
    cout << "Double: " << doubleNumber << endl;
    cout << "Long Double: " << longDoubleNumber << endl;

    cout << "Char: " << charVariable << endl;
    cout << "Unicode Char: " << unicodeChar << endl;
    cout << "Unicode Char32: " << unicodeChar32 << endl;
    cout << "Wide Char: " << wideChar << endl;

    cout << "Boolean: " << boolVariable << endl;

    cout << "Enum Color: " << myColor << endl;

    cout << "Pointer: " << ptr << endl;

    cout << "Reference: " << ref << endl;

    cout << "Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Structure Point: (" << p.x << ", " << p.y << ")" << endl;

    cout << "Union Number: " << numUnion.intValue << endl;


// IN C++ YOU CAN ALSO DECLARE ONE VALUE TO MUTLIPLE VARIABLES
    // Declare multiple variables of the same type:
    // In C++, you can declare multiple variables of 
    // the same type in a single statement by separating
    // the variable names with commas. Here's an example:
    int num1, num2, num3;

    // Assign a value to all declared variables

    num1 = num2 = num3 = 10;

    // Output the values of the variables
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;

    return 0;
}


// The data type specifies the size and type of information the variable will store:
// Data Type    	Size 	    Description

// boolean 	    1 byte 	        Stores true or false values
// char 	    1 byte 	        Stores a single character/letter/number, or ASCII values
// int 	        2 or 4 bytes 	Stores whole numbers, without decimals
// float 	    4 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
// double 	    8 bytes 	    Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
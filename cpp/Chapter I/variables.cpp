// VARIABLES IN C++
// variables are containers for storing data values
// In C++, variables are used to store data values that 
// can be manipulated and referenced within a program.

// In C++ there are different type of variables defined with different keywords.
// Example: 
//    int - stores integers (whole numbers), without decimals, such as 123 or -123
//    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
//    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
//    string - stores text, such as "Hello World". String values are surrounded by double quotes
//    bool - stores values with two states either true or false but not both at the same time.

// Here's an explanation of how variables work in C++:
//      type variableName = value; 
//      Where type is one of C++ types (such as int), and variableName 
//      is the name of the variable (such as x or myName).
//      The equal sign is used to assign values to the variable.

/*  1. In C++, variables must be declared before they can be used.
    The declaration specifies the data type of the variable along with its name.

    int age; // Declares a variable named 'age' of type 'int'
    age = 25; // Assign a value 25 to a variable

    2. Variable Initialization:
    Variables can be initialized at the time of declaration.
    This involves assigning an initial value to the variable.
    example: 

        int score = 100; // Declares and initializes a variable named 'score' with the value 100

    3. Variable Assignment:
        After declaration, variables can be assigned new values using the assignment operator (=).
        age = 25; // Assigns the value 25 to the variable 'age'
    
    4. naming rule in c++:
    In C++, variable names (identifiers) must adhere to certain rules. Here are the naming rules for variables in C++:

    Start with a Letter or Underscore:
        Variable names must begin with a letter (uppercase or lowercase) or an underscore (_).

    Consist of Letters, Digits, or Underscores:
        After the initial letter or underscore, variable names can contain letters (uppercase or lowercase), digits, or underscores.

    Case-Sensitive:
        C++ is case-sensitive, meaning that uppercase and lowercase letters are treated as distinct. For example, age, Age, and AGE would be considered different variable names.

    Reserved Keywords:
        Variable names cannot be the same as C++ keywords (reserved words), which have special meanings in the language. Examples of keywords include int, float, if, else, while, for, etc.

    No Spaces or Special Characters:
        Variable names cannot contain spaces, punctuation marks, or special characters (except underscores). They can only contain letters, digits, and underscores.

    Descriptive and Meaningful:
        Variable names should be descriptive and convey the purpose or meaning of the data they represent. This enhances code readability and understanding.

    Avoid Using Leading Underscores Followed by Uppercase Letters:
        Names starting with an underscore followed by an uppercase letter are reserved for use in the C++ library implementations.

        EXAMPLE OF INVALID VARIABLE NAMES IN C++:

        int 123abc; // Starts with a digit
        float my-temperature; // Contains a hyphen
        char my#char; // Contains a special character
        bool while; // Uses a reserved keyword
d       ouble _123salary; // Starts with an underscore followed by a digiT

        EXAMPLE OF VALID VARIABLE NAMES:
        int age;
        float temperature;
        double _salary;
        char myChar;
        bool isDone;
        int num_students;


    4. Data Types:
    C++ supports various data types for variables, including:

    int: Integer values (e.g., 42, -10)
    float: Floating-point numbers (e.g., 3.14, -0.5)
    double: Double-precision floating-point numbers
    char: Single characters (e.g., 'a', 'B', '#')
    bool: Boolean values (true or false)
    and more...  

    6. The scope of a variable refers to the part of the program where the variable is accessible. Variables can have either local or global scope.

    Local variables: Defined within a function or block and are accessible only within that function or block.
    Global variables: Defined outside of any function and are accessible throughout the entire program.
*/

#include <iostream>
using namespace std;

int main() {
    int age; // Variable declaration
    age = 25; // Variable assignment

    float pi = 3.14; // Variable declaration and initialization

    cout << "My age is " << age << " years old." << endl;
    cout << "The value of pi is approximately " << pi << endl;

    
    return 0;
}

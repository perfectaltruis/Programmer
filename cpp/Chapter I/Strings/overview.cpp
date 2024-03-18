// STRING DATA TYPE IN C++

/*
The string data type in C++ provides a convenient way to work with sequences of characters, making it easier to handle
text and manipulate strings within C++ programs. Here are some reasons why the string data type is important in C++:

    Ease of Use: Unlike working with character arrays (char[]), which require manual memory management and manipulation,
    string objects handle memory management and provide convenient member functions for string operations.

    Dynamic Size: string objects can grow or shrink dynamically as needed, making it easier to handle strings of varying
     lengths without worrying about buffer overflows or memory management issues.

    Rich Functionality: The string class provides a wide range of member functions for string manipulation, including
    concatenation, substring extraction, searching, comparison, and conversion to and from C-style strings (char*).

    Compatibility: C++ string objects can be used in conjunction with C-style strings (char*), allowing for seamless
    interoperability with libraries and functions that expect C-style strings.

    Standardization: The string class is part of the C++ Standard Library, making it widely available and ensuring
    consistency across different C++ implementations.

    Safer: string objects provide bounds checking and memory management, reducing the risk of common errors like buffer
    overflows and memory leaks that are more prevalent when working directly with character arrays.

    Object-Oriented: string is an object-oriented abstraction that encapsulates both data and behavior related to
    strings, promoting modular and maintainable code.

Overall, the string data type simplifies string manipulation and management in C++, offering a higher level of
abstraction and reducing the complexity associated with working with character arrays directly.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define and initialize string variables
    string my_string = "Hello, World!";
    string another_string("This is another string");

    // Output string variables
    cout << "My string: " << my_string << endl;
    cout << "Another string: " << another_string << endl;

    // Concatenate strings
    string combined_string = my_string + " " + another_string;
    cout << "Combined string: " << combined_string << endl;

    // Get string length
    cout << "Length of my string: " << my_string.length() << endl;

    // Accessing individual characters of a string
    cout << "First character of my string: " << my_string[0] << endl;

    // Modify string
    my_string[7] = 'w'; // Change 'W' to 'w'
    cout << "Modified string: " << my_string << endl;

    // Input string from user
    string input_string;
    cout << "Enter a string: ";
    getline(cin, input_string);
    cout << "You entered: " << input_string << endl;

    return 0;
}

/*
Explanation:
- We include the <iostream> and <string> libraries to work with input/output operations and string data type.
- The using namespace std; directive allows us to use elements from the standard namespace without specifying the namespace.
- We define and initialize two string variables: my_string and another_string.
- The cout statements output the values of the string variables.
- We concatenate two strings using the + operator and store the result in combined_string.
- We get the length of my_string using the length() member function of the string class.
- We access individual characters of my_string using the subscript operator [].
- We modify my_string by assigning a new character to a specific position.
- We prompt the user to enter a string using getline() and store it in input_string.
- Finally, we output the string entered by the user.
*/
// STRING CONCATENATION IN C++

// String concatenation in C++ can be done 
// using the + operator with std::string objects. you may also use append() function

#include <iostream>
#include <string>
using namespace std;

int main() {
    // USING append() function
    string first_string = "Hello";
    string second_string = "World";

    // Append second_string to first_string
    first_string.append(" ");
    first_string.append(second_string);
    first_string.append("!");

    // Output the concatenated string
    cout << "Combined string: " << first_string << endl;
    // In C++, the append() method is used to concatenate a string with another string. 
    // It appends the characters of the specified string to the end of the current string.
    // In this example, we first initialize two strings first_string and second_string. 
    // Then, we use the append() method to concatenate second_string to first_string, along 
    // with adding some additional characters such as a space and an exclamation mark. 
    // Finally, we output the resulting string using cout.

    // USING THE + OPERATOR:
    string first_name = "John ";
    string second_name = "Doe";
    string full_name = first_name + second_name;

    cout << full_name << endl;
    cout << "Your name is: " << full_name << endl;

    // In this example, we have two std::string objects named first_name and 
    // second_name. We concatenate these strings together along with some additional 
    // text using the + operator, and store the result in the full_name variable. 
    // Finally, we output the concatenated string using cout.
    // Note that we have added a  space at "John " to make the full_name more readable

    // STRING AND NUMBER CONCATENATION IN C++
    int number = 10;
    string message = "The number is: ";

    //convert number to string using to_string() function
    string number_string = to_string(number);

    // concatenate the number string with with the message string
    string combined_string = message + number_string;

    // Output the concatenated string
    cout << combined_string << endl;

    // In this example, we have an integer variable number with a value of 10, 
    // and a string variable message containing the text "The number is: ". 
    // We convert the integer number to a string using the to_string() function 
    // provided by the C++ standard library. Then, we concatenate the number string 
    // with the message string using the + operator, resulting in the combined string 
    // "The number is: 10". Finally, we output the concatenated string using cout.


    return 0;
}

// IF YOU CONCATENATE A STRING AND A NUMBER AN ERROR WILL OCCUR 
// LENGTH OF THE STRING IN C++

// In C++, you can get the length of a string using the 
// length() member function or the size() member function 
// of the std::string class. Here's how to do it:

#include <iostream>
#include <string>
using namespace std;

int main(){
    string  greeting = "Hello, World";
    string  message = "I love programming and it is easy to program a program in c++";
    
    // using length() function
    int length_using_length = greeting.length();

    // Using size() function
    int length_using_size = message.size();

    cout << "Length using length(): " << length_using_length << endl;
    cout << "Length using size(): " << length_using_size << endl;

    return 0;
}

// Both length() and size() functions return the number of characters in 
// the string. They are equivalent and can be used interchangeably.
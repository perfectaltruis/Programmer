// INTRODUCTION TO C++.
// C++ was developed by Bjarne Stroustrup, as an extension to the C language.
// The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.
// c++ is an object-oriented programming language which means that 
// c++ is mainly used in game development


// As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.
// Difference between C and C++:
// C++ was developed as an extension of C, and both languages have almost the same syntax.
// The main difference between C and C++ is that C++ support classes and objects, while C does not.

/*
GET STARTED IN C++ PROGRAMMING:
To start using C++ You need two things:
i: Text Editor Like Notepad, Visual Studio Code(Vscode)
ii: A compiler like GCC That translate your C++ code into a language that the computer will understand.

*/
/*
// FREE IDE (Integrated Developement Environment):
// I will use visual studio code.

    Development Environments (IDEs) for various programming languages:

    Visual Studio Code (VSCode): Developed by Microsoft, it supports a wide range of programming languages and offers extensive customization through extensions.
    PyCharm Community Edition: Dedicated IDE for Python development, offering features like code completion, debugging, and intelligent code analysis.
    Atom: A modern and hackable text editor developed by GitHub, supporting various programming languages with a rich ecosystem of packages and themes.
    Sublime Text: Lightweight yet powerful text editor known for its speed and simplicity, supporting multiple programming languages.
    Eclipse: A popular IDE primarily used for Java development, but also supports other languages like C/C++, Python, and more through plugins.
    NetBeans: An open-source IDE primarily used for Java development, also supporting languages like PHP, C/C++, and HTML5.
*/

// one any of your favorite IDE create a file and name it as Hello.cpp '.cpp': is an extension that is used in c++ files
// it the file write the following codes.

#include <iostream>
using namespace std;

int main(){
    cout << "Hello, World";
    return 0;

}

// FROM THE ABOVE CODES:
// LINE 37: #include <iostream>
//      This is a header file library that lets any
//      programmer including you to work will input 
//      and output objects like 'cout' used in line 41.
//      This line is a preprocessor directive which tells
//      the compiler to include the contents of the <iostream>
//      header file before compiling the program.

//      The <iostream> header file contains declarations for 
//      the input/output stream objects such as cin and cout.

// LINE 38: using namespace std
//      This means that you can use names for objects and
//      variables from the standard library. 
//      This line declares that the program will be using the std namespace.
//      The std namespace contains many standard C++ libraries, 
//      including the cout and cin objects used for input and output

// NOTE: You might see some C++ programs that runs without the standard namespace library.
// The using namespace std line can be omitted and replaced with the std keyword, 
//  followed by the :: operator for some objects:

// LINE 39: it is a blank line. C++ ignore blank line but 
//      it is used for more readability only.

// LINE 40: int main(){
//      This is a function and any code inside its curly braces will be executed
//      This line begins the definition of the main function, 
//      which serves as the entry point of the program.

//      The int before main specifies that the function returns an integer value.
//      The { character marks the beginning of the function body.

// LINE 41: cout << "Hello, World";:
//      This line uses the cout object from 
//      the std namespace to output the string "Hello, World" 
//      to the standard output (usually the console) ror screen.
//      The << operator is the insertion operator, which inserts 
//      the string into the cout stream for output.

//LINE 42: return 0;:

//      This line returns an integer value of 0 from the main function.
//      It indicates to the operating system that the program terminated successfully.
//      The return statement exits the main function and, consequently, the program execution.

// LINE 43: blank line just like at line 39:
// LINE 44: }:
//      This line marks the end of the main function body and the end of the program.
//      The } character closes the block of code started by the 
//      { character at the beginning of the main function.

// Note ; The semicolon (;) is used in C++ (and many other programming languages) 
// to terminate statements. It serves as a delimiter, indicating the end of a particular instruction or statement.

// In C++, each statement typically ends with a semicolon to signify its completion.
// This allows the compiler to distinguish between different statements within the code.
// The semicolon after "Hello, World" marks the end of the output statement using cout, 
// while the semicolon after return 0 indicates the end of the return statement.
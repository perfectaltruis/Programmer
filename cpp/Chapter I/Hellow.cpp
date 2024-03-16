#include <iostream>
using namespace std; // This means that we can use names for objects and variables from the standard library

// C++ ignores white spaces white spaces are used for code readability

int main(){ // This is a function and any code inside it is executed
    cout << "Hello, World: C++ is awesome\n";

    // cout pronounced as "see-out" is an object that ins used together with the insertia operator to print or output the output the text
    // Every c++ Program end with ;
    cout << "I will be happy unless the system is working" << endl;

    // When yo add more cout objects it does not start at the new line, 
    // Means that it will add to the exsiting lines
    // To insert a new line use \ escape character to do so while adding an 'n' at the end of the escape character
    // like this \n
    // Tips: 
    //      1. two \n line after each other will create a blank line

    // Another way to insert a new line is to use the endln manipulator 

    // THIS IS A SINGLE LINE COMMENTS
    /*This is a multiple line comment and it is used to write more comments at a time 
    use it if you what. So what is more important to use multiple inle or single? 
    As a programmer it is up tp You to choose what to use the most
    */

    int age = 45;
    cout << age;

    string name = "Insipirahub";

    cout << endl;
    cout << " I am" << name << " and I have \n" << age ;
    cout << "This is me and am trying to die hard";
    cout << "This will start at the new line";
    return 0;

}

// Always make sure to put your stuffs inside double quotes and not single quotes



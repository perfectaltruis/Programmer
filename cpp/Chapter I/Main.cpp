// Chapter Summary: C++

/*
This file appears to cover several 
aspects of C++ programming, including:

    Introduction to C++: It briefly describes C++ as a 
    cross-platform language used to create high-performance
     applications, popularly employed in computer programming
      and game development.

    Usage of cout and cin: It demonstrates the usage of cout
     for output and cin for input. It showcases printing text
      to the console and accepting user input.

    Variable Declaration and Manipulation: It shows how to
     declare and manipulate variables of different types 
     (int, double, string) in C++, including reassigning values 
     to variables and performing arithmetic operations.

    Variable Naming Conventions: It provides guidelines on 
    naming variables in C++, emphasizing the importance of using 
    descriptive names and following certain rules 
    (starting with letters, containing only alphanumeric 
    characters and underscores, etc.).

    Constants: It illustrates the declaration and usage of 
    constants in C++, showcasing the use of const keyword to
     define a constant value.

    Arithmetic Operations: It demonstrates basic arithmetic
     operations such as addition, subtraction, multiplication, 
     and division, including type conversion (casting) and 
     calculating the average of two numbers.

    Escape Sequences: It explains the use of escape sequences 
    like \n for inserting new lines in the output.

    Comments: It includes comments explaining each section of 
    the code, as well as providing additional explanations on 
    certain concepts (such as including <iostream> header, using 
    using namespace std;, and the structure of the main() function).

Overall, the file serves as a beginner-friendly introduction 
to various fundamental concepts and features of C++ programming.
*/

// C++ is a cross-platform that is used to
// Create high performance application
// It is a popular language used in computer
// Programming and it is used mainly in 
// Game development

// It gives programmers high level contorl 
// Over the system resources and memory 
// managements


#include <iostream>

using namespace std;

int main(){
    int number = 46;
    cout << "The number is: " << number << endl;
    cout << number;
    cout << "\nAm proud being a Tanzanian" << endl;
   
    string name = "John Doe";
    name = "Stanley";
    cout << "My name is \'" << name << "\' and I'm " << number << " Years Old." << endl;

    string relative = "Joean Rodriguez";
    cout << "I'm " << relative << "\'s Brother, I love you" << endl;

    double salary = 34.9887;

    double sum = number + salary;

    cout << "My income is " << salary << " Per Month" << endl;
    cout << "me and my salary we make a total of: "<< sum << endl;
    cout << sum;

    // While naming variables in c++ we should make sure that they are unique 
    // No need to use short names please acramatize to use more descriptive names 
    // when working with variable  in c++ 

    // Rules: Variable names should start with letters
    // They should contain only letters, numbers and underscore
    // This means tat they have to include only alphanumeric character and underscores
    // No need  to use white space to write a more descriptive names you may use _ to do this
    // Variable names are case sensitive Myname and MYname are two different thing
    // Variable names can not include reserved names like int, double or while

    int width = 5;
    int height = 6;
    double triangle = 0.5 * height * width;

    cout << "Area of the triangle is: " << triangle << endl;

    const double PIE = 3.14;
    int radius = 5;
    double area = PIE * radius * radius;

    cout << "The area of this radius is: " << area << endl;

    int age;
    cout << "What is Your age: \t";
    cin >> age;
    cout << "You're: " << age << " Years Old" << endl;

    int first_number;
    int second_number;

    cout << "First Number: ";
    cin >> first_number;

    cout << "Second Number: ";
    cin >> second_number;

    int summation = first_number + second_number;
    int diff = first_number - second_number;
    int product = first_number * second_number;
    int quotient = first_number / second_number;

    double average = double(summation / 2);

    cout << "Sum is: " << summation << endl;
    cout << "Difference is: " << diff << endl;
    cout << "Product is: " << product << endl;
    cout << "Quotient is: " << quotient << endl;
    cout << "Average of the number is: " << average << endl;
    return 0;
}


/*
#include <iostream>: This line means that we can start writing our codes in c++ it is a header file 
that help us to start working with input and output objects like cout and cin
using namespace std;:This line allow us to starti using names and Objects from the starndard library
int main(){}: This is a function any code inside its curly braces will be executed
return 0: This make sure that the function returns a number and integer either <0 or >0 or 0itself

*/

//To insert a new line use \n
// \n is called an escape sequence character 
// It is used to force the cursor to start in a new
// line. you can also use endl manipulator to
// make the same  output, But good to know that \n
// is used more frequently than an endl manipulator



// java is popular programming language it was created in 1995
// java is owned by Oracle and more than 3 billion devices run java
// java is used to create mobile application especially android apps
// java is used to create web applications
// java is also used to create desktop applications
// java is used in database connections in web applications
// java is used in game developments too


// why use java:
// java works on different platforms(windows, Mac, Linux and Raspberry Pi)
// java is most popular programming language
// java it runs on different areas
// java is open source java is an object-oriented programming language
// java is powerful, fast and secure
// java is close to C++, C# and C it so it is more important to learn java
// install java


public class Main{
    public static void main(String[] args){
        System.out.println("First file in java");
        System.out.println(840);
        System.out.println(56 + 3);


// variable and data type in java.
// variables are contaniners for storing data values
// string: store text such as "How are you" remember strings
// are stored in a variable in double quotes
// int: This type of data type store whole numbers from 0 to infinity
// this data type store whole number without decimal points
// float: This type of variables store number with floating points
// they include a . part in their numbers example 674.974 this is a float data typ
// char stores a single character like "1" or "t" or "%"
// booleans: this store value with two values only like on or of and not both
// but booleans data type are TRUE and FALSE
// DECLARING DATA TYPE IN JAVA
// to declare a variable in java just specify the type of data the variable will store and then the name of the variable
// after  that add an assignment operator to assign a value to it. look the example below
// int age = 48;
// in the example above we start by identifiying the type of the variable
// and the followed by the name of the variable and after that i used the = assignment operator
// to assign a value 48  to it, remember to add a ";" at the end of the line the ";" is used to
// to terminate the line.

        String name = "John Doe";
        System.out.println(name);

        float salary = 4759.49f;
        salary = 4.0498349f;
        System.out.println(salary);
// final varible
// if you do not want you or others to change the value of
// the variable you can use a final keyword
        double radius = 5;
        final double PIE = 3.14159;
        double area = PIE * radius * radius;

        System.out.println(area);

// println() method is used to display variables
        System.out.println("The area of the circle is: " + area);

        String first_name = "John ";
        String last_name = " Doe";
        String full_name = first_name + last_name;

        System.out.println(full_name);

        int numberone = 40, numberthree = 45, numbertwo = 4;
        System.out.println(numberone + numbertwo + numberthree);

        int x, y, z;
        x = y = z = 50;
        System.out.println(x);
        System.out.println(z);

        byte nu = 45;
        System.out.println(nu);

// all java variables are must be identified with unique names.
// these unique names are called identifiers we preffers to use descriptive names
// NOTE: it is most impotant to use desxriptive names in java while nameing the name of the variable
//




// name of java file should match the name of the class
// java is case-sensitive myclass and Myclass are two different names
// main(): The main method will always be there and any code inside it it will be executed
// every java file has a class name as the name of the file
// any class in java start with the capital letter

// inside the main method we can use System.out.println() method to
// output the value of the variable or other data types
//  System: is a built-in java class that contain useful members such as out, whic is short of output
// the println() is a method used to print the value to the screen it is a methods

// we can use a println(): Method to print out the value to the console
// you can add as many println() methods as you want. Note it
// will not start a new line. it will add a new line for each
// println() methods

// print() method
// there is also a new method that can be used to print the
// output to the screen it is called print(). the only
// difference between print and println() method is that the
// print() method does not insert a new line at the end of the output
// while the println() method does

// this is a single line  comment in java
// this is also a single line comment in java
// You can also use a single line comments at the end of the line and any thing will be fine

/*
this is a multiple line comment in java
you can add more lines of comment in this area
thanks for understanding this

 */
    }
}

// JAVA NAMING RULES:
//  variable names are identifiers and therefore thery are required to be unique
// for example my_name and MYname are two different names in java variable names

// variable names should only contain alpha numeric character, underscore and dollar sign
// that is varaiable names should not contain other letters or special symbols apart from
// dollar sign

// variable names shoud always start with letter, and in small letter although variable names
// can also start with dollar sign or underscore but it is recommended to start with small letter

// reserved words for java should never be used( words like if, else, int, final and much more

// variable names are case-sensitive: this means that the word name, Name and NAME are all three
// different things in java.


// DATA TYPE IN JAVA:
// variables in java are containers for storing values of different data type and here are some
// data type used in java programming language. there are primitive and non-primitive data type:

//  int, Strings, float, double, booleans and char
// all above data types are divided into two categories
// I: Primitive data type:
//   Primitive data type are: int, long, float, double, byte, short, booleans and char.
// II: Non-Primitive data type:
//    Non-Primitive data type are: Strings, arrays and classess

// java numbers is devided into two groups
// integer type and floating point type:
// integer type are numeric data type that stores numeric data that do not have any decimal points
// example byte = 5;, long and short as well

// floating point type store data in terms of decimal points
// the two type of that data type is: float abd double
// although i will be using int and double for whole number and floating numbers in entire tutorial
//

// java booleans data type
// in java boolean data type is used to find and make decision based on the implementaion logic
//
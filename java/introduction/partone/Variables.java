/*
    Variable and Data type in Java:
    In Java, Variables are containers for storing data values.
    Every variable has a data type, which determines the type of data that can be stored it the variable.
    Java support various data type including primitive and reference data types.

        Primitive Data Types:
         - byte: 8-bit integer.
         - short: 16-bit integer.
         - int: 32-bit integer.
         - long: 64-bit integer.
         - float: 32-bit floating-points(single precision).
         - double: 64-bit floating-point(double precision).
         - char: 16-bit Unicode character
         - boolean: Represent true or false but not both.

     Reference Data Types:
        - Reference data types are objects that are created using predefined classes or user-defined classes.
        - Examples include String, Arrays, Classes, etc.

    In this example, we declare variables of different data types and assign values to them.
*/


public class Variables {
    public static void main(String[] args){
        // Declaration and Initialization of Variables
        byte myByte = 127;          // Byte data type
        short myShort = 32000;      // Short data type
        int myInt = 2147483647;     // Integer data type
        long myLong = 9223372036854775807L; // Long data type
        float myFloat = 3.14f;      // Float data type
        double myDouble = 3.141592653589793; // Double data type
        char myChar = 'A';          // Character data type
        boolean myBoolean = true;   // Boolean data type

        // Output Variables
        System.out.println("byte: " + myByte);
        System.out.println("short: " + myShort);
        System.out.println("int: " + myInt);
        System.out.println("long: " + myLong);
        System.out.println("float: " + myFloat);
        System.out.println("double: " + myDouble);
        System.out.println("char: " + myChar);
        System.out.println("boolean: " + myBoolean);
    }
}
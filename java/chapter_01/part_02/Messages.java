// STRINGS IN JAVA

/*
    In java, strings are used to store more than one character. Remember String are non-primitive data type in java.
    -To create a sting in java just declare a variable of your choice and assign a value to it using a = assign operator
    -A variable values should be in double quotes remember that right? like this name = "John"
*/
public class Messages {
    public static void main(String[] args){
        String greetings = "Hello";
        System.out.println(greetings); // Will output Hello

        /*
        String is actually an object that contain methods that can be used to perform different operations on strings
        For example if you want to see the length of the string you can use a length() Methond that will find the length
        of your string and print it out. LOOK AT THE EXAMPLE BELOW
        */
        String text = "Learning Java is awesome, Please join me!";
        System.out.println("The length of this string is " + ' ' + text.length() + " Characler ");  // 41 characters

        // There are more methods that you can use in strings for instance you cand use toUpperCase() or toLoweCase()
        // These methods are used to convert the variable values to uppercase and lowercase respectively.LOOK AT THIS...

        String name = "John Doe";
        System.out.println(name.toUpperCase() + ": Variable value is in Upper case");
        System.out.println(name.toLowerCase() + ": Variable value is in Lower case");

        // finding a character in Strings.
        // The indexOf() Method is used to find the index of a character in a string: index means a position of the
        // first occurrence of a specified text in a string including whitespace. TAKE THIS EXAMPLE HERE

        String txt = "Please locate where 'locate' occurs!";
        System.out.println(txt.indexOf("locate")); // Outputs 7

        //Java counts positions from zero.
        //0 is the first position in a string, 1 is the second, 2 is the third ...

        // More string methods
        String sentence = "Java is fun to learn!";
        System.out.println(sentence.substring(8)); // Outputs "fun to learn!": Returns substring from index 8 to end
        System.out.println(sentence.charAt(5)); // Outputs 'i': Returns character at index 5
        System.out.println(sentence.equalsIgnoreCase("java is fun to learn!")); // Outputs true: Ignores case for comparison
        System.out.println(sentence.startsWith("Java")); // Outputs true: Checks if string starts with "Java"
        System.out.println(sentence.endsWith("!")); // Outputs true: Checks if string ends with "!"
        System.out.println(sentence.replace("fun", "easy")); // Outputs "Java is easy to learn!": Replaces "fun" with "easy"

        // STRING CONCATENATION
        // concatination means adding or combining two or more strings
        // The + Operator can be used to concatinate strings. TAKE AN EXAMPLE BELOW
        String first_name = "Joane";
        String last_name = "Doe";
        System.out.println(first_name + " " + last_name); // result wil be: Joane Doe.
        // Note that we have added an empty text ("") to create a space between first_name and last_name on print

        // You can also use concat() Method to concatenate two strings. have a look at this
        String your_name = "Wilfred "; // There is an empty space here to create a space.
        String your_last_name = "Kato";
        System.out.println(your_name.concat(your_last_name));
/*
  + Operator is used either to add or to concatinate. It is used to add(find the sum or total) if used in numbers
  but use it if you concatenate a string.
    - if you add a two numbers the result will be a number.
    - if you use it in string the result will be string concatenation.
    - if you use it with number and a string the result is string concatination.
*/
        //    - if you add a two numbers the result will be a number.

        int a = 20; // a is an integer. note int at the starting of the variable
        int b = 40; // b is an integer. note int at the starting of the variable
        int c = a + b;
        System.out.println(c); // resule is: 60


        //   - if you use it in string the result will be string concatenation.
        // Example one
        String x = "10"; // x is a string not a number. remember "" and String as a type the same to y
        String y = "50";
        String z = x + y;
        System.out.println(z); // X will be 1050(A string)

        //  Example two:
        String student_name = "John";
        String father_name = "Doe";
        System.out.println(student_name + " " + father_name);

    }
}
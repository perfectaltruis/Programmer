# VARIABLE NAMING RULES

# A variable can have a short name (like x and y) or a more descriptive name (age, carname, total_volume).

# In Python, variable names must adhere to certain rules to ensure clarity and consistency in code.
# Here are the rules for naming variables in Python:
#
# Valid Characters:
# Variable names can contain letters (both lowercase and uppercase),
# digits, and underscores (_). They must start with a letter or an underscore.
#
# Case Sensitivity:
# Python is case-sensitive, so variable names are also case-sensitive.
# This means that myVar,MyVar, and MYVAR are considered different variables.
#
# Reserved Keywords:
# Variable names cannot be the same as Python
# keywords or reserved words,such as if, else, while, for, True, False, None, etc.
#

# Convention:
# While not strictly enforced by the Python interpreter, it's common practice to follow certain naming
# conventions:
# Use descriptive names that reflect the purpose or content of the variable. Use lowercase letters for
# variable names, separating words with underscores (snake_case). This convention is typically used for variable
# names, function names, and module-level constants. Use uppercase letters for constants that are meant to be
# immutable and should not be changed during the program execution (UPPERCASE_WITH_UNDERSCORES).
#
# Readability: Variable names should be descriptive and meaningful. Avoid using single-letter names (x, y,
# z) or overly abbreviated names that may not be clear to other developers reading the code.
#
# Avoid Starting with Underscore:
# While variables can start with an underscore, names starting with a single
# underscore are often used to indicate that the variable is intended for internal use within a module or class.
# Names starting with double underscores have special meaning in Python and are used for name mangling in classes.
#
# Length:
# Variable names can be of any length, but it's generally recommended to keep them concise while still being
# descriptive. Long, descriptive names can improve readability, but excessively long names may become cumbersome.

age = 24
first_name = "John"
total_amount = 100.50
is_valid = True

# ADDITIONAL NOTES:
# Be Consistent:
#    - Follow consistent naming conventions throughout your codebase to improve readability and maintainability.
#
#
# Naming Convention in Programming:
# There are more naming convention in the example above I use Kebab Case
# You can use any of the following convention just feel free to use the one that you desire.

# Snake Case:
#   Words are separated by underscores (_) and all letters are lowercase.
#  Example: student_name

# Pascal Case:
#    Similar to CamelCase but the first letter of each word is capitalized.
#   Example: StudentName

# Upper Camel Case (also known as Pascal Case):

#  Similar to CamelCase but the first letter of the first word is capitalized.
# Example: StudentName

# Hungarian Notation:
#   Prefixes are added to variable names to indicate their data type.
#  Example: strStudentName for a string variable.

# Lowercase:
#  All letters are lowercase with words separated by underscores (_).

# Example: student_name

# Upper Snake Case:
#   All letters are uppercase with words separated by underscores (_).
# Example: STUDENT_NAME

# PLEASE REMEMBER TO DECLARE A DESCRIPTIVE NAME IN NAMING VARIABLES FOR MORE READABLE CODES.
# ALSO DO NOT USE KEBAB CASE NAMING CONVENTION IN NAMING VARIBLES. LIKE student-name. BECAUSE
# variable names in Python do not allow the use of -

print("")
print("\tNAMING VARIABLE IN PYTHON")  # \t is a special character. Do not worry about it.
print("Please read all comments in this file as well")
print("I hope You will be able to declare your variable name correctly in python")

print("Familiarize yourself with different naming conventions used in programming")
print("While keep in mind to adhere to naming rules in python")

# I WILL USE SNAKE CASE NAMING IN ALL OF MY CODES

# DO NOT BE CONFUSED WITH THE CODE BELOW JUST RUN THE PROGRAM TO READ IT IN YOUR TERMINAL

# Creating a table of naming conventions and examples
naming_conventions = [
    ("Snake Case", "variable_name"),
    ("Pascal Case", "VariableName"),
    ("Camel Case", "variableName"),
    ("Hungarian Notation", "strVariableName"),
    ("Upper Snake Case", "VARIABLE_NAME")
]

# Printing the table
print("")
print("+----------------------+---------------------------+")
print("| Naming Convention    | Example                   |")
print("+----------------------+---------------------------+")
for convention, example in naming_conventions:
    print(f"| {convention:<20} | {example:<25} |")
print("+----------------------+---------------------------+")


# Reserved keywords are words that have special meanings in Python and are reserved for specific purposes. They
# cannot be used as variable names because they are part of the Python language syntax. Here's a list of commonly
# used reserved keywords in Python:
#
# List of reserved keywords in Python
reserved_keywords = [
    'and', 'as', 'assert', 'async', 'await',
    'break', 'class', 'continue', 'def', 'del',
    'elif', 'else', 'except', 'False', 'finally',
    'for', 'from', 'global', 'if', 'import',
    'in', 'is', 'lambda', 'None', 'nonlocal',
    'not', 'or', 'pass', 'raise', 'return',
    'True', 'try', 'while', 'with', 'yield'
]

print("")
print("Reserved keywords are words that have special meanings in Python and are reserved for specific purposes. They "
      "cannot be used as variable names because they are part of the Python language syntax. Here's a list of "
      "commonly used reserved keywords in Python:")
print("RESERVED WORDS IN PYTHON:")
for keyword in reserved_keywords:
    print(keyword, end=", ")

# It's crucial to avoid using these words as variable names
# to prevent conflicts and ensure the proper functioning of your code.

# OUTPUT VARIABLES
# The print() function is used to output variables in python
# Example

message = "Hello, World "
information = "I'm Learning Python Prgramming "
final = "Python is awesome "

print(final)  # Output: Python is awesome

#  In the print() function, you output multiple variables, separated by a comma:
# Example
print(message, information, final)

# You can also use the + operator to output multiple variables:
# Example:

print(message + information + final)

# For numbers, the + character works as a mathematical operator:
# Example:
voting_age = 18
my_age = 34

print(voting_age + my_age)

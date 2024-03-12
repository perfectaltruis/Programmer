# PYTHON VARIABLES

# variables: Are containers for storing data values
# Python has no any command for declaring variable. A variable is created the moment you first assign a value to it.
# Variables do not need to be declared with any key words or particular type and you can simply change the type of the
# variable without specifying the type of the variable being changed or changing.

numeral = 7  # numeral is the name of the variable, = sign is used to assing a value to it, 7 is its value
print(numeral)  # will output the value of a variable numeral which is 7

print("variable value is changed")
numeral = "Hello, Variable"  # Variable value has been changed from int to strings
print(numeral)

# To get the type of the variable you can use type() function as below
name = "John Doe"
age = 45
print(type(name))  # type() is a function to get the data type stored in the variable.: in this it is a string
print(type(age)) # Output: int

# String variable can be declared either by using single or double quotes.
friend = "Joane Doe"
girl_friend = 'Joane Doe'

print(friend)
print(girl_friend)

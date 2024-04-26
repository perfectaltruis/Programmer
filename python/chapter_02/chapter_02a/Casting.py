# CASTING IN PYTHON
#
# Casting, in programming, refers to the process of converting a variable from one data type to
# another. It's essentially changing the interpretation of how the data is stored in memory without changing the
# actual data itself.
#
# In Python, casting is often performed using constructor functions for the target data type. For example:
#
#     int() is used to cast to an integer data type.
#     float() is used to cast to a floating-point number data type.
#     str() is used to cast to a string data type.
#
# Casting can be useful when you want to perform operations or comparisons between different types of data. For
# instance, converting a string containing a numerical value to an actual number allows you to perform mathematical
# operations on it. Similarly, converting a number to a string allows you to concatenate it with other strings.

# Python Casting
# Specify a Variable Type

# There may be times when you want to specify a type on to a variable. This can be done with casting. Python is an
# object-oriented language, and as such, it uses classes to define data types, including its primitive types.

# Casting in Python is, therefore, done using constructor functions:

# int() - constructs an integer number from an integer literal, a float literal (by removing all decimals),
# or a string literal (providing the string represents a whole number)
# float() - constructs a float number from an integer literal, a float literal, or a string literal
# (providing the string represents a float or an integer)
# str() - constructs a string from a wide variety of data types, including strings, integer literals, and float literals

# Example
# Integers:
x = int(1)  # x will be 1
y = int(2.8)  # y will be 2
z = int("3")  # z will be 3

# Floats:
x_float = float(1)  # x will be 1.0
y_float = float(2.8)  # y will be 2.8
z_float = float("3")  # z will be 3.0
w_float = float("4.2")  # w will be 4.2

# Strings:
x_str = str("s1")  # x will be 's1'
y_str = str(2)  # y will be '2'
z_str = str(3.0)  # z will be '3.0'

# Print the results
print("Integers:")
print("x =", x)
print("y =", y)
print("z =", z)

print("\nFloats:")
print("x_float =", x_float)
print("y_float =", y_float)
print("z_float =", z_float)
print("w_float =", w_float)

print("\nStrings:")
print("x_str =", x_str)
print("y_str =", y_str)
print("z_str =", z_str)

# This code carefully demonstrates how to use constructor functions to perform type casting in Python, with examples
# of converting integers, floats, and strings to other data types. Each example is clearly labeled and explained.

# Casting examples
x = "10"  # String containing a numerical value
y = int(x)  # Casting the string to an integer
z = float(x)  # Casting the string to a float

print("Original string:", x)
print("After casting to int:", y)
print("After casting to float:", z)

# In this example, the variable x starts as a string containing the value "10". After casting it to an integer (int(
# x)), y holds the integer 10. Similarly, after casting it to a float (float(x)), z holds the floating-point number
# 10.0.

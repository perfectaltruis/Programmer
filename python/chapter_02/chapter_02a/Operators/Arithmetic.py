# OPERATORS IN PYTHON

# Operators are special symbols that are used in programming not only in python but most languages uses operators to
# perform different operations on variables, data type or values

# These operators are used in various contexts to perform different types of operations,
# such as mathematical calculations, comparisons, logical operations, and more.
# Understanding how to use operators effectively is essential for writing Python code efficiently.
#
# Python have the following operators:
# 1. Arithmetic Operators:
#         Addition (+)
#         Subtraction (-)
#         Multiplication (*)
#         Division (/)
#         Floor Division (//)
#         Modulus (%)
#         Exponentiation (**)
# Arithmetic Operators are used to perform normal Arithmetic Operations on variables

number = 2
integer = 3
print(number + integer)  # output: 2 + 3 = 5
print(number - integer)  # Output: 2 - 3 = -1
print(number * number)  # Output: 2 * 2 = 4
print(number ** integer)  # Output: 2 ** 3 = 8 (2 exponent 3)
print(number / integer)  # output: 2 / 3 = 0.666
print(45 % number)  # output reminder of 3 divide by 2:   which is 1

# Floor division, denoted by the double forward slash operator //, is a mathematical operation in Python that divides
# one number by another and returns the quotient rounded down to the nearest whole number
# Here's how floor division works:
#
# If both operands are integers, floor division performs regular division and then rounds down the result to the
# nearest integer that is less than or equal to the true quotient. ----------If one or both operands are floating-point
# numbers, floor division still rounds down to the nearest integer but returns a floating-point number as the result.
# LOOK AT THE EXAMPLE BELOW:

# Integer floor division
result1 = 10 // 3  # Result is 3
result2 = -10 // 3  # Result is -4 (because -3.333... rounds down to -4)

# Floating-point floor division
result3 = 10.5 // 3  # Result is 3.0 (because 3.5 rounds down to 3.0)
result4 = -10.5 // 3  # Result is -4.0 (because -3.5 rounds down to -4.0)

# Print the results
print("Integer floor division:")
print("Result 1:", result1)
print("Result 2:", result2)

print("\nFloating-point floor division:")
print("Result 3:", result3)
print("Result 4:", result4)

# This code initializes variables result1, result2, result3, and result4 with the results of floor division
# operations, and then prints out these results with appropriate comments.

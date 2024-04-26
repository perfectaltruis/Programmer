#  NUMBERS DATA TYPE
#  AS i said in the Data.py file that python has built-in data type and numbers is one of them
#  There are three numeric data type in python
#  i. int: Int, or integer, is a whole number, positive or negative, without decimals, of unlimited length.
#  Example:
age = 45  # 45 is a positive number or int
print(type(age))  # outputs <class 'int'>

#  ii. float: Float, or "floating point number" is a number, positive or negative, containing one or more decimals.
#  Example:
balance = 45.98  # float
print(balance)
print(type(balance))  # outputs <class 'float'>
#  Float can also be scientific numbers with an "e" to indicate the power of 10.
#  Example:
pressure = 35e5  # float
print(pressure)  # outputs 3500000.0
print(type(pressure))  # outputs <class 'float'>

# iii. complex: Complex numbers are written with a "j" as the imaginary part
# Example:
complex_number = 5+4j
print(complex_number)  # Output: (5+4j)
complex_digit = 4j
print(complex_digit)  # output 4j

# Complex numbers have a real part and an imaginary part. In Python, the imaginary part is represented by appending a
# "j" after the imaginary part's coefficient. For example:

# complex_number = 5 + 4j
# print(complex_number)  # Output: (5+4j)
#
# complex_digit = 4j
# print(complex_digit)   # Output: 4j
#
# In the first example, 5 is the real part and 4j is the imaginary part. In the second example, 0 is the real part,
# and 4j is the imaginary part.

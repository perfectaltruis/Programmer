# DATA TYPE IN PYTHON
# We learned in Chapter one that variable are containers to store values. Values stored by
# variables are of different data type, So understanding data type is very important in Understanding data types is
# fundamental for writing efficient and bug-free code. Python has various built-in data types, and here we'll cover
# some of the most commonly used ones:
# 1. Numeric Data type:
#    i. integers: Whole numbers either negative or positive without floating point numbers of infinite length
#    ii. float: Floating point numbers either positive or negative with one or more decimal points of infinite length
#    iii. complex: whole number with a "j" as an imaginary part.
#
# 2. Sequence Data type:
#    i. list: ordered collections of items, which can be of mixed types. you can change their content after creation.
#    ii. tuple: tuples are immutable means that you can not change their values after creation, list are mutable.
#    iii. range: represents an immutable sequence of numbers and is commonly used for looping in loops

# 3. Mapping Data type:
#     Mapping type represents a collection of key-value pairs. The primary mapping type in Python is:
#     i. Dictionary(dict):  are unordered collections of key-value pairs, where each key is associated with a value.

# 4. Set Data type:
#    Set types represent unordered collections of unique elements. Python supports two set types:
#    i: set: unordered collections of unique elements, sets do not allow duplicate elements
#    ii: frozenset: Are similar to set but they are immutable means their contents can not be changed after creation.

# 5. Boolean Data Type
#    Boolean type represents truth values. The primary boolean type in Python is:
#    i. Boolean (bool): values are either True or False and are  used in conditional statements and control flow.

# 6. Binary Data Types
#     Binary types represent binary data. Python supports several binary types:
#     i. bytes: represent a sequence of bytes, similar to strings but immutable.
#     ii. bytearray: is a mutable sequence of bytes.
#     iii. memoryview: provides a way to access the internal data of an object that supports the buffer protocol.
#

# 7. None Data type None type represents the absence of a value or a null value. i. None (None type): The None type
# has only one value: None. It is often used to signify that a variable has no value assigned to it.


# Understanding these data types is crucial for writing Python code effectively. As you progress in your Python journey,
# you'll encounter more complex data structures and types, but mastering these basics will provide a strong foundation.

# SETTING THE DATA TYPE
# In python you can set the type of the data the moment you assign a value to a variable
# Example:
age = 67  # Variable age has a data type of int of value 67
print(age)  # outputs the value of the variable: 67 in this case

salary = 5009.989
print(salary)  # output the float data type

#  GETTING THE DATA TYPE.
# You can get the data type of any object by using the type() function:

name = 'John Doe'
print(type(name))  # outputs <class 'str'>. This indicates that the data type of the variable is of class string
print(type(salary))  # outputs <class 'float'> This is because float is of numbers data type.

storage = b"5"  # byte data type
print(storage)
print(type(storage))  # outputs <class 'bytes'>


fruits = ["apple", "banana", "cherry"]
print(fruits)  # display fruits:
print(type(fruits))  # display the data type of fruits: in this case it is <class 'list'>

# SETTING A SPECIFIC DATA TYPE
# in python you can also set a specific data type
friends = tuple(("John", "Doe", "Joane"))
print(friends)
print(type(friends))  # display the data type of friends:


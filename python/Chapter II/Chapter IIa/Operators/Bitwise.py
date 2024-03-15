#  BITWISE AND IDENTITY OPERATORS

#     Identity Operators:
#         IS (is)
#         IS NOT (is not)
#
#     Bitwise Operators:
#         Bitwise AND (&)
#         Bitwise OR (|)
#         Bitwise XOR (^)
#         Bitwise NOT (~)
#         Left Shift (<<)
#         Right Shift (>>)
#
#
# Identity and Bitwise Operators

# Identity Operators
# initialize two variables x and y as lists containing the elements
# [1, 2, 3]. In Python, square brackets [] are used to denote lists, which are ordered collections of items separated
# by commas. In this case, both x and y are lists with the same elements [1, 2, 3]. However, even though they have
# the same contents, x and y are distinct list objects in memory, as they are assigned different memory addresses.
#
# Here's what each line does:
#
#     x = [1, 2, 3]: This line initializes a list x with elements 1, 2, and 3.
#     y = [1, 2, 3]: This line initializes a separate list y with the same elements 1, 2, and 3.
#
# After executing these lines, x and y will both refer to lists containing [1, 2, 3], but they will be distinct
# objects in memory. This means that modifications to one list will not affect the other.
#
# Variables
x = [1, 2, 3]
y = [1, 2, 3]

# Identity test (is)
print("Are x and y the same object?", x is y)  # Output: False

# Identity test (is not)
print("Are x and y different objects?", x is not y)  # Output: True

# Bitwise Operators
# Variables
a = 60    # 60 = 0011 1100
b = 13    # 13 = 0000 1101

# Bitwise AND (&)
print("Bitwise AND of a and b:", a & b)  # Output: 12 (Binary: 0000 1100)

# Bitwise OR (|)
print("Bitwise OR of a and b:", a | b)   # Output: 61 (Binary: 0011 1101)

# Bitwise XOR (^)
print("Bitwise XOR of a and b:", a ^ b)   # Output: 49 (Binary: 0011 0001)

# Bitwise NOT (~)
print("Bitwise NOT of a:", ~a)            # Output: -61 (Binary: 1100 0011)

# Bitwise left shift (<<)
print("Bitwise left shift of a by 2 bits:", a << 2)  # Output: 240 (Binary: 1111 0000)

# Bitwise right shift (>>)
print("Bitwise right shift of a by 2 bits:", a >> 2) # Output: 15 (Binary: 0000 1111)

# In this script:
#
# We demonstrate identity operators (is and is not) to check if two variables refer to the same object. We
# demonstrate bitwise operators such as bitwise AND (&), bitwise OR (|), bitwise XOR (^), bitwise NOT (~),
# bitwise left shift (<<), and bitwise right shift (>>). Each operation performs the corresponding bitwise operation
# on the binary representation of the given numbers.
#

# Bitwise and identity operators serve different purposes in Python:
#
#     Bitwise AND (&): Returns 1 if both bits are 1, otherwise returns 0.
#     Bitwise OR (|): Returns 1 if at least one bit is 1, otherwise returns 0.
#     Bitwise XOR (^): Returns 1 if bits are different, otherwise returns 0.
#     Bitwise NOT (~): Flips the bits, changing each 1 to 0 and each 0 to 1.
#     Bitwise left shift (<<): Multiplies the integer by 2 to the power of the specified shift amount.
# Bitwise right shift (>>): Divides the integer by 2 to the power of the specified shift amount,truncating any remainder
#     Uses of bitwise operators include low-level programming, such as working with binary data, setting or clearing
#     individual bits, and implementing various bitwise algorithms or optimizations.
#
#   Identity Operators:
#    Identity test (is): Evaluates to True if the two variables reference the same object in memory, otherwise False.
#    Negated identity test (is not): Evaluates to True if the two variables reference different objects in memory,False.
#
#     Identity operators are used to compare the memory locations of objects rather than their values.
#     They are often used to determine whether two variables refer to the same object, which can be useful in scenarios
#     such as checking for object mutability or sharing of references in Python.

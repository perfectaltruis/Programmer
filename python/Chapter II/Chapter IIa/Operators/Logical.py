# LOGICAL OPERATORS

# Logical Operators: AND (and) OR (or) NOT (not) These operators are commonly used in control flow statements,
# such as if, while, and for loops, to make decisions based on multiple conditions.

number = 5
print(not(number > 3 and number < 10))  # Output: False (negating the result of the 'and' operation)
print(number > 3 or number < 4)  # Output: True (at least one condition is true)
print(number > 3 and number < 10)  # Output: True (both conditions are true)


#     Membership Operators:
#         IN (in)
#         NOT IN (not in)

# Membership Operators
text = "Hello, World!"

# Membership test (in)
print("Is 'Hello' in text?", 'Hello' in text)  # Output: True

# Membership test (not in)
print("Is 'Python' not in text?", 'Python' not in text)  # Output: True

# In the above script:
# We have a string text containing the text "Hello, World!".
# We demonstrate membership operators such as membership test (in) and negated membership test (not in) using strings.
# Each operation returns a boolean value (True or False) based on whether the substring is present in the string or not

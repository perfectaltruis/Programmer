# STRING FORMATTING IN PYTHON
# String formatting in Python refers to the process of creating formatted strings by embedding variables or expressions
# within a string. It allows you to combine strings with data in a readable and efficient manner. There are several
# ways to perform string formatting in Python:

# 1. Old Style Formatting (% operator): This method is the older style of string formatting in Python. You use %
# operator to insert values into a string template. Example:

name = "Alice"
age = 22
greeting = "Hello, my name is %s and I am %d years old." % (name, age)
print("\n")  # insert a new line which is blank
print(greeting)  # Output: Hello, my name is Alice and I am 30 years old.

location = "Paris"
weather = "sunny"
greeting = "Hello from %s, where the weather is %s!" %(location, weather)
print(greeting)  # Output: Hello from Paris, where the weather is sunny!

# 2. str.format() method:
# This method allows you to insert values into a string using placeholders {} which are replaced by the values passed to
# the format() method.
subject = "Python programming"
level = "intermediate"
# format() method
welcome = "Welcome to a course on {} at the {} level.".format(subject, level)
print(welcome)  # Output: Welcome to a course on Python programming at the intermediate level.

# 3. f-strings (Formatted String Literals):
# Introduced in Python 3.6, f-strings provide a concise and readable way to format strings by prefixing the string with
# f or F. Inside an f-string, you can directly include variables or expressions using curly braces {}.
# Example:
favorite_color = "blue"
animal = "cat"
message = f"My favorite color is {favorite_color} and my spirit animal is a {animal}."
print(message)  # Output: My favorite color is blue and my spirit animal is a cat.

# String formatting allows you to create dynamic strings without manually concatenating multiple parts. It enhances code
# readability and maintainability, especially when dealing with complex strings or including multiple variables in a
# string. Each method has its advantages and use cases, so you can choose the one that best fits your requirements and
# coding style.

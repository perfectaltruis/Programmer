# STRING MODIFICATION IN PYTHON
#
# In Python, strings are immutable, meaning you cannot modify them in place. However,
# you can create new strings based on existing ones using various string manipulation methods. Here are some common
# ways to modify strings:

# 1: String Methods: Python provides several built-in string methods
# that allow you to manipulate strings, such as upper(), lower(), strip(), replace(), split(), and join().

original_string = "  hello, world!  "
name = "John Doe "
# Convert to uppercase
modified_string = original_string.upper()

print(modified_string)  # Output:   HELLO, WORLD!
print(name.upper())  # output: JOHN DOE
print("\n")  # insert a new blank line

# Strip leading and trailing whitespace
modified_string = original_string.strip()
print(modified_string)  # Output: hello, world!
print(name.strip())  # output: John Doe
print("\n")  # insert a new blank line

# Replace substring
modified_string = original_string.replace("world", "Python")
print(modified_string)  # Output:   hello, Python!
print(name.replace("John", "Joane"))
print("\n")  # insert a new blank line

# Split string into list of substrings
modified_list = original_string.split(',')
print(modified_list)  # Output: ['  hello', ' world!  ']
print(name.split(','))
print("\n")  # insert a new blank line

# Join list of substrings into a single string
modified_string = '-'.join(modified_list)
print(modified_string)  # Output:   hello- world!
print("\n")  # insert a new blank line


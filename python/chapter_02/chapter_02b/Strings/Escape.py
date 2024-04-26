# ESCAPE CHARACTERS IN PYTHON

# Escape characters in Python are special characters that are preceded by a backslash (\).
# They are used to represent characters that are difficult or impossible to type directly into a string.
# Here are some common escape characters and their explanations:
#
#     \n: Newline - Inserts a newline character.
#     \t: Tab - Inserts a tab character.
#     \\: Backslash - Inserts a backslash character.
#     \": Double quote - Inserts a double quote character.
#     \': Single quote - Inserts a single quote character.

# Example demonstrating escape characters
# Newline character
print("Hello\nworld!")  # Output: Hello
                         #         world!

# Tab character
print("Hello\tworld!")  # Output: Hello   world!

# Backslash character
print("This is a backslash: \\")  # Output: This is a backslash: \

# Double quote character
print("He said, \"Hello!\"")  # Output: He said, "Hello!"


# Single quote character
print('It\'s raining')  # Output: It's raining
message = 'One of Python\'s strengths is its diverse community.'
print(message)

# COMBINED ESCAPE CHARACTERS
print("Languages:\n\tPython\n\tC\n\tJavaScript")
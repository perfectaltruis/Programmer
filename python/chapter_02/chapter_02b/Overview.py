#  STRING DATA TYPE

# In Python, a string is a sequence of characters enclosed within either single quotes ('') or double quotes ("").
# Strings are immutable, meaning they cannot be changed after creation. They are one of the fundamental data types in
# Python and are widely used for representing text data.

# Assigning a string to a variable is done with a variable name and followed by an equal sign and the string in either
# single or double quotes

# Example of strings
string1 = 'Hello, World!'
string2 = "Python is awesome."

print(string1)  # Output: Hello, World!
print(string2)  # Output: Python is awesome.

# MULTIPLE STRINGS
# You can assign multiple strings to a variable by using three quotes, either single quotes or double quotes.
# Note: in the result, the line breaks are inserted at the same position as in the code.

message = '''Python is a powerful and versatile programming language.
It is widely used for various applications, including web development, data analysis,
artificial intelligence, and scientific computing.

Learning Python opens up a world of opportunities for developers,
allowing them to create innovative solutions and tackle complex problems.
Whether you're a beginner or an experienced programmer,
mastering Python can significantly enhance your skills and career prospects.
So, embrace the journey of learning Python and unleash your creativity!
'''

print(message)

# Strings can contain letters, numbers, symbols, and whitespace characters.
# They also support various operations such as concatenation, slicing, and indexing.


# Strings are Arrays
# Like many other popular programming languages, strings in Python are arrays of bytes representing unicode characters.
# However, Python does not have a character data type, a single character is simply a string with a length of 1.
# Square brackets can be used to access elements of the string.

greetings = "Hello World"
print(greetings[6])  # outputs W because the index number of W is 6. index number start at 0 not at 1. H = 0, e = 1, ...

# LOOPING THROUGH A STRING
#  Since strings are arrays, we can loop through the characters in a string, with a for loop.
for greeting in greetings:
    print(greeting)  # outputs Hello World in vertical direction

for greeting in greetings:
    print(greetings)  # output Hello World in horizontal direction

# LENGTH OF A STRING
# You can determine the length of the string by using the len() function
print(len(message))  # 540
print("The length of message is: " + str(len(message)))  # 540
# In Python, when you perform string concatenation using the + operator, all operands must be of type str. However,
# len(message) returns an integer representing the length of the string message, not a string itself.
#
# Therefore, before concatenating it with the rest of the message, you need to convert the integer value to a string
# using the str() function. This conversion ensures that all operands in the concatenation operation are of type str,
# allowing the operation to proceed without error.


text = "Despite the free lunch"
print(text)

# CHECKING A STRING
print("free" in text)  # Outputs True: Because free is in a text
print("Dinner" not in text)  # output True: Because Dinner is not in a text
print("lunch" not in text)  # output False: As lunch is in the text, but we need to see if it is not there

# IF STATEMENTS IN STRINGS
if "free" in text:
    print("Yes, Despite the lunch")  # The text in print function will be displayed if free is in text
    #  remember to add indentation otherwise error will occur

if "expensive" not in text:
    print("No, 'expensive' is NOT present.")

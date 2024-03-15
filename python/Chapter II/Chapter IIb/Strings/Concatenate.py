# STRING CONCATENATION
# String concatenation in Python refers to the process of combining multiple strings into one.
# There are several ways to concatenate strings:

# 1. Using the + operator:
# You can use the + operator to concatenate two or more strings together
greeting = "Hello"
name = "Alice"
message = greeting + ", " + name + "!"
print(message)  # Output: Hello, Alice!

# 2. Using the str.join() method:
# The join() method joins all items in an iterable (such as a list) into a single
# string, with the string as a separator.
#
words = ["Hello", "world", "!"]
message = " ".join(words)
print(message)  # Output: Hello world !

# Using f-strings (Formatted String Literals):
# Introduced in Python 3.6, f-strings allow you to embed expressions directly within strings.

word1 = "Hello"
word2 = "world"
message = f"{word1} {word2}!"
print(message)  # Output: Hello world!

# Using the str.format() method:
# The format() method allows you to insert values into a
# string using placeholders {} which are replaced by the values passed to the format() method.

word1 = "Hello"
word2 = "world"
message = "{} {}!".format(word1, word2)
print(message)  # Output: Hello world!

# Using triple quotes (for long concatenations):
# Triple quotes (''' or """) can be used to define long strings spanning multiple lines.

paragraph = '''This is a sample paragraph used for demonstration purposes.
It contains some text that is easy to understand and follow.'''
print(paragraph)

# MORE EXAMPLES:
quantity = 3
item_number = 567
price = 49.95
order = "I want {} pieces of item {} for {} dollars."
print(order.format(quantity, item_number, price))

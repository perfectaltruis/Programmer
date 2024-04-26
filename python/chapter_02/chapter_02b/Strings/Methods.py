# STRING METHODS IN PYTHON
#
# In Python, methods are functions that belong to an object. They are called using the dot
# notation (.) after the object they belong to. Strings in Python are objects of the str class, and they come with a
# variety of built-in methods that allow you to manipulate and work with strings.
#
# Here are some common methods available for strings in Python:
#
#     capitalize(): Converts the first character of the string to uppercase.
#     upper(): Converts all characters of the string to uppercase.
#     lower(): Converts all characters of the string to lowercase.
#     title(): Converts the first character of each word to uppercase.
#     swapcase(): Swaps the case of each character in the string.
#     count(substring): Returns the number of occurrences of a substring in the string.
#     find(substring): Returns the lowest index of the substring in the string (-1 if not found).
#     replace(old, new): Replaces occurrences of a substring with another substring.
#     strip(): Removes leading and trailing whitespace characters.
#     split(separator): Splits the string into a list of substrings using the specified separator.
#
# These methods provide convenient ways to manipulate and process strings in Python. You can use them to perform
# various operations such as case conversion, searching for substrings, replacing text, and more.
#
# Explaining 10 String Methods in Python

# 1. capitalize(): Converts the first character to uppercase.
text = "hello world"
capitalized_text = text.capitalize()
print("1. capitalize():", capitalized_text)  # Output: Hello world

# 2. upper(): Converts all characters to uppercase.
uppercase_text = text.upper()
print("2. upper():", uppercase_text)  # Output: HELLO WORLD

# 3. lower(): Converts all characters to lowercase.
lowercase_text = text.lower()
print("3. lower():", lowercase_text)  # Output: hello world

# 4. title(): Converts the first character of each word to uppercase.
title_text = text.title()
print("4. title():", title_text)  # Output: Hello World

# 5. swapcase(): Swaps the case of each character.
swapcase_text = text.swapcase()
print("5. swapcase():", swapcase_text)  # Output: HELLO WORLD

# 6. count(substring): Returns the number of occurrences of a substring in the string.
count_hello = text.count("hello")
print("6. count(substring):", count_hello)  # Output: 1

# 7. find(substring): Returns the lowest index of the substring in the string (-1 if not found).
index_world = text.find("world")
print("7. find(substring):", index_world)  # Output: 6

# 8. replace(old, new): Replaces occurrences of a substring with another substring.
replaced_text = text.replace("world", "Python")
print("8. replace(old, new):", replaced_text)  # Output: hello Python

# 9. strip(): Removes leading and trailing whitespace characters.
text_with_spaces = "  hello world  "
stripped_text = text_with_spaces.strip()
print("9. strip():", stripped_text)  # Output: hello world

# 10. split(separator): Splits the string into a list of substrings using the specified separator.
split_text = text.split(" ")
print("10. split(separator):", split_text)  # Output: ['hello', 'world']


# Note: All string methods return new values. They do not change the original string.

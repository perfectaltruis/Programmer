# SLICING IN PYTHON

# Slicing in Python is a way to extract a portion of a sequence (such as a string, list, or tuple) by specifying a
# start index, an end index, and an optional step size. Here are some examples to demonstrate slicing:
# Note: The first character has index 0.

# Slice From the Start:
# By leaving out the start index, the range will start at the first character:

message = "Hello, World"
print(message[:5])  # from the start, final index number is 5 as specified above
print(message[3:])  # start slicing from index 3 to the end


# Example 1: Basic Slicing
text = "Python is amazing!"
substring1 = text[7:12]
print("Substring 1:", substring1)  # Output: is am

# Example 2: Slicing with Negative Indices
last_five_chars = text[-5:]
print("Last five characters:", last_five_chars)  # Output: zing!

# Example 3: Slicing with a Step Size
every_second_char = text[::2]
print("Every second character:", every_second_char)  # Output: Pto saaig

# Example 4: Reverse the String
reversed_text = text[::-1]
print("Reversed string:", reversed_text)  # Output: !gnizama si nohtyP

# Example 5: Slicing with Omitted Indices
substring2 = text[:6]
print("Substring 2:", substring2)  # Output: Python

# Example 6: Slicing with Start and End Indices
substring3 = text[7:]
print("Substring 3:", substring3)  # Output: is amazing!

# Example 7: Full String
full_string = text[:]
print("Full string:", full_string)  # Output: Python is amazing!

# Summary
print("\nThese examples cover various slicing techniques with strings in Python, including basic slicing, "
      "slicing with negative indices, slicing with a step size, reversing the string, slicing with omitted indices, "
      "slicing with start and end indices, and obtaining the full string.")

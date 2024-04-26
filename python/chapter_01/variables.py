# PYTHON VARIABLES.
# Python allows you to assign values to multiple variables in one line
# Look at this example below

print("Python allows You to declare and assign values on multiple variables in one line. \n")
# Make sure that the number if variable matches the number if values or else you will get an error

first_fruit, second_fruit, third_fruit = "Orange", "Pineapple", "Cherry"
print(first_fruit)
print(second_fruit)
print(third_fruit)

# Python also Allows you to assign the same value to more than one variable
my_age = 18
voting_age = 18
student_age = 18
print(f"My age is {my_age} years old")
print(f"Student's age is {student_age} years old")
print(f"You're allowed to vote only if you turn {voting_age} years")

# AS YOU CAN SEE ABOVE WE TRIED TO ASSIGN THE SAME VALUE ON EACH VARIABLE BUT THAT CAN BE TIME CONSUMING INSTEAD OF
# THAT NOW YOU CAN ASSIGN THE SAME VALUE ON DIFFERENT VARIABLE BY DOING LIKE THIS

my_age = student_age = voting_age = 18
print(my_age)
print(voting_age)
print(student_age)

# POINT TO NOTE THIS PART FROM THE CODE ABOVE:
# print(f"My age is {my_age} years old")
# print(f"Student's age is {student_age} years old")
# print(f"You're allowed to vote only if you turn {voting_age} years")
#
# In Python, f-strings provide a convenient way to format strings by allowing you to embed
# expressions, variables, and even function calls directly within string literals. Here's a detailed explanation of
# each part:
#
#     f": This marks the string literal as an f-string, indicating that Python should perform string formatting on it.
#
# "My age is {my_age} years old": This is the string template where {my_age} is a placeholder enclosed in curly
# braces {}. Inside the curly braces, my_age refers to a variable whose value will be inserted into the string at
# that position. When the f-string is evaluated, Python replaces {my_age} with the value of the variable my_age.
#
# print(f"My age is {my_age} years old"): This line uses the print() function to display the formatted string. The f"
# prefix indicates that it's an f-string. During execution, Python evaluates the expression within the curly braces {
# } and substitutes the placeholders with the actual values of the variables.
#
# Similarly, the other two print() statements use f-strings to format and display strings containing variables (
# student_age and voting_age) in a similar manner.
#
# Overall, f-strings provide a concise and readable way to incorporate variables and expressions directly into
# strings, making string formatting in Python more straightforward and expressive.


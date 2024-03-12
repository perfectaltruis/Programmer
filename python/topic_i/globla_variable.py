# Global Variables
#
# Variables that are created outside of a function (as in all of the examples above) are known as global variables.
#
# Global variables can be used by everyone, both inside of functions and outside.
# example

wish = "I wish you a happy coding Journey"


def message():
    print("Python is " + wish)


message()

# If you create a variable with the same name inside a function, this variable will be local, and can only be used
# inside the function. The global variable with the same name will remain as it was, global and with the original value.
# Example

message = "awesome"


def myfunc():
    message = "fantastic"
    print("Python is " + message)


myfunc()

print("Python is " + message)


# The global Keyword
#
# Normally, when you create a variable inside a function,
# that variable is local, and can only be used inside that function.
#
# To create a global variable inside a function, you can use the global keyword.

def function():
    global info
    info = "fantastic"


function()

print("Python is " + info)

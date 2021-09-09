############################################
#                                          #
#               Lab Program 9              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
# Write a program to find the factorial of #
#   a number using functions and without   #
#   using functions. Accept the input at   #
#                 runtime.                 #
#                                          #
############################################

import math
from math import factorial

print("Finding Factorial of Given Number")

fact=1
num1=int(input("Enter Any Number For Factorial:"))
for i in range(num1):
    fact=fact+fact*i
print("Factorial of {0} is =".format(num1),fact)

n=int(input("Enter Any Number For Factorial:"))
if n<0:
    print("Enter Positive Integer")
print("Factorial of",n,"is", factorial(num))
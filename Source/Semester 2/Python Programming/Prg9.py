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

from math import factorial

def fun_fact(n):
    fact=1
    for i in range(n):
        fact=fact+fact*i
    print("Factorial of ",n," is =",fact)

print("Finding Factorial of Given Number")
n=int(input("Enter Any Number For Factorial(User Defined Function):"))
fun_fact(n)
n=int(input("Enter Any Number For Factorial(Built in Function):"))
if n<0:
    print("Enter Positive Integer")
print("Factorial of",n,"is = ", factorial(n))
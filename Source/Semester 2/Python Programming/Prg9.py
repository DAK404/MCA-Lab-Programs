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

def using_fun(n):
    global facto
    facto=1
    for i in range(n):
        facto+=facto*i
    return facto
    
def using_recursion(num1):
    if num1==1 or num1==0:
        return 1        
    if num<0:
        return "Enter Positive Integer"
    return(num1*using_recursion(num1-1))
        
def using_method(num):
    if num<0:
        return "Enter Positive Integer"
    return factorial(num)
    
print("Finding Factorial of Given Number")
print("1.Find Using Without Function")
print("2.Find Using Function")
print("3.Find Using Recursion")
print("4.Find Using Method")
print("5.Exit")
        
while True:
    choice=int(input("Enter Your Choice:"))
    if choice==1:
        fact=1
        num1=int(input("Enter Any Number For Factorial:"))
        for i in range(num1):
            fact=fact+fact*i
        print("Factorial of {0} is =".format(num1),fact)
    elif choice==2:
        n=int(input("Enter Any Number For Factorial:"))
        print("Factorial of {0} is =".format(n),using_fun(n))
    elif choice==3:
        num=int(input("Enter Any Number For Factorial:"))
        print("Factorial of {0} is =".format(num),using_recursion(num))
    elif choice==4:
        num=int(input("Enter Any Number For Factorial:"))
        print("Factorial of {0} is =".format(num),using_method(num))
    elif choice==5:
        exit()
    else:
        print("Enter a valid choice")
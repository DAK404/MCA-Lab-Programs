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
    return(num1*using_recursion(num1-1)) if num > 0 else return "Enter Positive Integer"
        
def using_method(num):
    if num<0:
        return factorial(num) if num > 0 else return "Enter Positive Integer"
    
print("Finding Factorial of Given Number")
print("1.Find Using Without Function
print("2.Find Using Function")
print("3.Find Using Recursion")
print("4.Find Using Method")
print("5.Exit")
        
while True:
    choice=int(input("\n\tEnter Your Choice:"))
    if choice==1:
        fact=1
        num1=int(input("\n\tEnter Any Number For Factorial:"))
        for i in range(num1):
            fact=fact+fact*i
        print("\n\tFactorial of {0} is =".format(num1),fact)
    elif choice==2:
        n=int(input("\n\tEnter Any Number For Factorial:"))
        print("\n\tFactorial of {0} is =".format(n),using_fun(n))
    elif choice==3:
        num=int(input("\n\tEnter Any Number For Factorial:"))
        print("\n\tFactorial of {0} is =".format(num),using_recursion(num))
    elif choice==4:
        num=int(input("\n\tEnter Any Number For Factorial:"))
        print("\n\tFactorial of {0} is =".format(num),using_method(num))
    elif choice==5:
        exit()
    else:
        print("Enter a valid choice")
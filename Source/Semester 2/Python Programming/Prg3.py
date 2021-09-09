############################################
#                                          #
#               Lab Program 3              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#  Demonstrate the usage of math and cmath #
#   module.(For Ex. Program to find the    #
#      roots of a Quadratic Equation)      #
#                                          #
############################################

import math
import cmath

a=int(input("Enter A’s value: "))
b=int(input("Enter B’s value: "))
c=int(input("Enter C’s value: "))

D=(b**2)-(4*a*c)
if(D==0):
       print("Roots are Equal")
       x1=-b/(2*a)
       x2=x1
       print("Roots are:",x1,x2)
elif(D>0):
       print("Roots are Real and Distinct")
       x1=(-b-math.sqrt(D))/(2*a)
       x2=(-b+math.sqrt(D))/(2*a)
       print("Roots are:{:.2f}".format(x1))
       print("Roots are:{:.2f}".format(x2))
else:
       print("Roots are Complex:")
       x1=(-b-cmath.sqrt(D))/(2*a)
       x2=(-b-cmath.sqrt(D))/(2*a)
       print("The Solution are {0} and {1}".format(x1,x2))
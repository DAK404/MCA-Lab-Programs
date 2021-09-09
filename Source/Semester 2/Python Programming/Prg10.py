############################################
#                                          #
#              Lab Program 10              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#  Demonstrate the i) Designing of a class #
#   ii) Creation of Object of that class   #
#  iii) accessing the methods and instance #
#  variables in the class. The student is  #
#   at the liberty of choosing their own   #
#  Description of the object for designing #
#                 the class.               #
#                                          #
############################################

class Student: 
    def __init__(self,r,n,a):
        self.rollno=r 
        self.name=n 
        self.age=a 
         
    def ShowDetails(self): 
        print("Your Roll No:",self.rollno) 
        print("Your Name:",self.name) 
        print("Your Age:",self.age) 
         
name=input("Enter Your Name:") 
age=int(input("Enter your Age:")) 
roll=(input("Enter Your Roll Number:")) 
print("--Student Details--")
obj=Student(roll,name,age) 
obj.ShowDetails()
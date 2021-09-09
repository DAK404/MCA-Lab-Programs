############################################
#                                          #
#               Lab Program 5              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#        Write a program to find the       #
#          largest of two numbers          #
#                                          #
############################################

a,b=int(input("Enter The First Number:")), int(input("Enter The Second Number:"))
if a==b:
    print("Both inputs are Equal")
print("Greatest Number is ", a) if a > b else print("Greatest Number is =", b)
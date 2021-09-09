############################################
#                                          #
#               Lab Program 6              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#        Write a program to find the       #
#         largest of three numbers         #
#                                          #
############################################

num1, num2, num3 =int(input("Enter First Number")), int(input("Enter Second Number")), int(input("Enter Third Number"))
if (num1>=num2) and (num2>=num3):
    print("Greatest Number is: ",num1)
elif (num2>=num1) and (num2>=num3):
    print("Greatest Number is: ",num2)
else:
    print("Greatest Number is: ",num3)
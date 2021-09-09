############################################
#                                          #
#               Lab Program 7              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#  Design a menu driven program to check   #
#    whether the number is i)A perfect     #
#    number or not ii)Armstrong number     #
#                 or not                   #
#                                          #
############################################

def perfect_number(n):
    sum = 0
    for x in range(1, n):
        if n % x == 0:
            sum += x
    return("is a Perfect Number" if sum == n else "is not a Perfect Number")
    
def armstrong_number(num):
    order = len(str(num))
    sum = 0
    temp = num
    while temp > 0:
       digit = temp % 10
       sum += digit ** order
       temp //= 10
    return ("is an Armstrong number"if num == sum else "is not an Armstrong number")
    
def number_palindrome(num):
    temp=num
    rev=0
    while(num>0):
        dig=num%10
        rev=rev*10+dig
        num=num//10
    return("is a palindrome!" if(temp==rev) else "is Not a palindrome!")

def string_palindrome(string):
    return("is a palindrome" if(string==string[::-1]) else "Not a palindrome")

print("1.Check Perfect Number or Not")
print("2.Check Armstrong Number or Not")
print("3.Check Number is Palindrome or Not")
print("4.Check String is Palindrome or Not")
print("5.Exit")

while True:
    choice=int(input("Enter Your Choice: "))
    if choice==1:
        num1=int(input("Enter an Integer To Check Perfect Number or Not : "))
        print("{0}".format(num1),perfect_number(num1))
    elif choice==2:
        num1=int(input("Enter an Integer To Check Armstrong Number or Not : "))
        print("{0}".format(num1),armstrong_number(num1))
    elif choice==3:
        num1=int(input("Enter an Integer To Check Palindrome : "))
        print("{0}".format(num1),number_palindrome(num1))
    elif choice==4:
        num1=str(input("Enter String To Check Palindrome or Not: "))
        print("{0}".format(num1),string_palindrome(num1))
    elif choice==5:
        exit()
    else:
        print("Please enter a valid choice")
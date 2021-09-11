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
    print(n,"is a Perfect Number") if sum == n else print(n, "is not a Perfect Number")
    
def armstrong_number(num):
    order = len(str(num))
    sum = 0
    temp = num
    while temp > 0:
       digit = temp % 10
       sum += digit ** order
       temp //= 10
    print(num, "is an Armstrong number") if num == sum else print(num, "is not an Armstrong number")

def palindrome(string):
    print(string,"is a palindrome") if(string==string[::-1]) else print(string, "Not a palindrome")

print("1.Check Perfect Number or Not")
print("2.Check Armstrong Number or Not")
print("3.Check Number is Palindrome or Not")
print("4.Exit")

while True:
    choice=int(input("Enter Your Choice: "))
    if choice==1:
        perfect_number(int(input("Enter an Integer To Check Perfect Number or Not : ")))
    elif choice==2:
        armstrong_number(int(input("Enter an Integer To Check Armstrong Number or Not : ")))
    elif choice==3:
        palindrome(input("Enter an Integer To Check Palindrome : "))
    elif choice==4:
        exit()
    else:
        print("Please enter a valid choice")

############################################
#                                          #
#               Lab Program 4              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#  Illustrate the usage of files with the  #
#  help of different functions defined on  #
#  Files(such as write, read(demonstrate   #
#   all four forms), open, and close(use   #
#    both the forms of closing a file)     #
#                                          #
############################################

fName = input("Enter the file name: ")
print("File Handling Demo")
print("1.Create File")
print("2.Append Something in File")
print("3.Erase File Data")
print("4.Read File")
print("5.Exit")
while True:
    cho=int(input("\nEnter your choice: "))
    if cho==1:
        file = open(fName,'w')
        text=input("Enter data:")
        file.write(text)
        file.close()
        print("File Created Successfully.")
    elif cho==2:
        file = open(fName,'a')
        testAppend=input("Enter data to Append:")
        file.write(testAppend)
        file.close()
        print("File data has been appended.")
    elif cho==3:
        file = open(fName,'w')
        file.close()
        print("File data has been erased.")
    elif cho==4:
        file = open(fName, "r")
        print (file.read())
    elif cho==5:
        exit()
    else:
        print("Please enter a valid choice")
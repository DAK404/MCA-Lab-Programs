############################################
#                                          #
#               Lab Program 1              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#  Demonstrate runtime reading of Strings  #
#  i)  Illustrate the concept of String    #
#      Slicing.                            #
#  ii) Also demonstrate a minimum of 5     #
#      functions defined on Strings        #
#                                          #
############################################

print("DEMO 1 : Read Data via STDIN")
print("----------------------------")
String = input("Enter a string : ")
print("Input Value    :", String)
print("\n-      End of DEMO 1       -")
print("\nDEMO 2 : String Slicing")
print("----------------------------")
print("slice(3)         :", String[slice(3)])
print("slice(1, 5, 2)   :", String[slice(1,5,2)])
print("slice(-1,-12,-2) :", String[slice(-1,-12,-2)])
print("\n-      End of DEMO 2       -")
print("\nDEMO 3 : 5 String Functions")
print("----------------------------")
print("Uppercase :", String.upper())
print("Lowercase :", String.lower())
print("Starts With \'H\'? :", String.startswith("H"))
print("Ends With \'D\'?   :", String.endswith("D"))
print("Split at Whitespace:", String.split(" "))
print("\n-      End of DEMO 3       -")

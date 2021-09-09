############################################
#                                          #
#               Lab Program 8              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
# Show the different operations defined on #
#      Lists, Tuples and Dictionaries      #
#                                          #
############################################

print("List Functions")
ls = [1, 2, 3]
print("List contains: ", ls)
ls.append(4)
print("After appending list contains: ", ls)
ls.remove(1)
print("After removing 1st element list contains: ", ls)
ls[2] = 'Python'
print("Modifying the last element: ", ls)
ls.clear()
print("After clearing elements list contains: ", ls)

print("\nTuple Functions")
tu = (1, 2, 3)
print("Tuple contains: ", tu)
tu = tu + (4,)
print("After appending tuple contains: ", tu)
tu1 = list(tu)
tu1.remove(1)
tu1 = tuple(tu1)
print("After removing 1st element tuple contains: ", tu1)
tu3 = list(tu1)
tu3[2] = 'Python'
print("Modifying the last element: ", tu3)
tu2 = list(tu)
tu2.clear()
tu2 = tuple(tu2)
print("After clearing elements tuple contains: ", tu2)

print("\nDictionary Functions")
di = {1: 100, 2: 200}
print("Dictionary contains: ", di)
di.update({3: 300})
print("After adding dictionary contains: ", di)
di.pop(1)
print("After removing 1st element dictionary contains: ", di)
di[3] = 'Python'
print("Modifying the value for Key value 3: ", di)
di.clear()
print("After clearing elements dictionary contains: ", di)
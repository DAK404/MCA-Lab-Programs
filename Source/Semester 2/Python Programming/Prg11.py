############################################
#                                          #
#              Lab Program 11              #
#                                          #
# Author : DAK (https://github.com/DAK404) #
############################################
#                                          #
#              GUI Program 1               #
#                                          #
############################################

from tkinter import *

root = Tk()
root.title("Labeler")
root.geometry("200x50")
app = Frame(root)
app.grid()
lbl = Label(app, text = "I'm a label!")
lbl.grid()
bttn1 = Button(app, text = "I do nothing!")
bttn1.grid()
bttn2 = Button(app)
bttn2.grid()
bttn2.configure(text = "Me too!")
bttn3 = Button(app)
bttn3.grid()
bttn3["text"] = "Same here!"
root.mainloop()

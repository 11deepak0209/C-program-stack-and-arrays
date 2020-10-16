import time
from tkinter import *

root = Tk()
root.title("Digital Clock")
root.geometry("400x100") ## dimensions should big 
## color 
label = Label(root, font=("Black", 30, 'bold'), bg="Dark Blue", fg="yellow", bd =30) ## these color combination is good and visble
label.grid(row=0, column=1)
## function for clock time
def clock():
    text_input = time.strftime("%H:%M:%S")
    label.config(text=text_input)
    label.after(200, clock)
    
clock()
root.mainloop()

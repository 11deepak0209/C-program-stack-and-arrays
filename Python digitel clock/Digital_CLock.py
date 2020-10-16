import time
from tkinter import *

root = Tk()
root.title("Digital Clock")
root.geometry("400x100") ## dimensions is best now 
## color 
label = Label(root, font=("Black", 30, 'bold'), bg="Yellow", fg="Black", bd =30) ## now the clock color visible
label.grid(row=0, column=1)
## function for clock time
def clock():
    text_input = time.strftime("%H:%M:%S") ## formet of Time in hours minutes and seconds
    label.config(text=text_input)
    label.after(200, clock)
    
clock()
root.mainloop()

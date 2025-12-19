# Build a simple desktop calculator application using a GUI library.
# Simple Desktop Calculator (Python – Tkinter)
# Features
# •	Addition, Subtraction, Multiplication, Division
# •	Simple GUI with buttons
# •	Easy to understand code

import tkinter as tk

# Create main window
root = tk.Tk()
root.title("Simple Calculator")

# Entry box
entry = tk.Entry(root, width=20, font=("Arial", 14), borderwidth=2)
entry.grid(row=0, column=0, columnspan=4)

# Button click function
def button_click(value):
    entry.insert(tk.END, value)

# Clear function
def clear():
    entry.delete(0, tk.END)

# Calculate function
def calculate():
    result = eval(entry.get())
    entry.delete(0, tk.END)
    entry.insert(0, result)

# Buttons
buttons = [
    ('7',1,0), ('8',1,1), ('9',1,2), ('/',1,3),
    ('4',2,0), ('5',2,1), ('6',2,2), ('*',2,3),
    ('1',3,0), ('2',3,1), ('3',3,2), ('-',3,3),
    ('0',4,0), ('.',4,1), ('+',4,2), ('=',4,3)
]

# Create buttons
for (text, row, col) in buttons:
    if text == '=':
        tk.Button(root, text=text, width=5, command=calculate).grid(row=row, column=col)
    else:
        tk.Button(root, text=text, width=5,
                  command=lambda t=text: button_click(t)).grid(row=row, column=col)

# Clear button
tk.Button(root, text="C", width=22, command=clear).grid(row=5, column=0, columnspan=4)

# Run application
root.mainloop()

# Practical Example 1: How does the Python code structure work? 
# 1. Basic Python Code Structure

# A simple Python script usually follows this flow:

# Imports
# Variables / Constants
# Functions
# Main program execution

# Example
# 1. Import libraries
import math

# 2. Variables
radius = 5

# 3. Function definition
def calculate_area(r):
    area = math.pi * r * r
    return area

# 4. Main execution
result = calculate_area(radius)
print("Area of circle:", result)
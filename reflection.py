import time
import sys

# Juanie & Lance

# Text to display as an animated typing effect
text = """
The C++ payroll program is designed to simulate a basic payroll processing system, 
allowing users to input employee information, perform calculations, and display a report. 
This code demonstrates foundational programming concepts like input/output handling, 
data storage, arithmetic calculations, and formatted output, all of which are essential 
for a payroll system.
"""

# Function to simulate typing effect
def animate_text(text):
    for char in text:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(0.05)  # Adjust speed of typing effect

# Run the animation
animate_text(text)

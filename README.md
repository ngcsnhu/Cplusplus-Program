# Cplusplus-Program

# Summarize the project and what problem it was solving.
The project consists of a header and implementation file that outputs the end user’s local time and prompts a menu for the end user to decide if they want to add one hour, minute, or second to the clock. The program outputs a 12-hour and 24-hour clock that reads the same time in their format. The problem is programmers from around the world utilize different time formats, and this program acts as the translator between the two formats.

# What did you do particularly well?
As I program my projects, I like to thoroughly document my code from top to bottom and left to right. Especially with longer coding files and complex requirements, I ensured I stayed on track with what I wanted to accomplish by creating code comments for every action that would be executed when I compiled my project.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
My project contains a clock.h and implementation.cpp but does not contain a main.cpp file. I could enhance my code by moving the main function to a new main implementation file and using the clock.h to define the functions so I could solely use the clock.cpp for implementing the functions. This could make the code easier to read and lessen the length of each file so that main.cpp only contains the main function.

# Which pieces of code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
My challenge during the project was changing the hours from 12 to 1, or the minutes and seconds from 60 to 0 once a full minute or hour passes on the 12-hour clock. I overcame this challenge by revisiting previous Zybooks chapters we went over in class, to review implementing classes and functions for storing data in a variable used for calculations. After reviewing, I was able to create a class for each clock with 3 separate functions for hours, minutes, and seconds.

# What skills from this project will be particularly transferable to other projects or coursework?
While this was the first project we were assigned in class, it taught me the best in learning how each variable and function contributes to the overall goal of the project – to effectively execute calculations for two different clocks. As I continue building my skills as a programmer, learning the small details and parts of a code leading up to a successful project will prove most valuable for future coursework.

# How did you make this program maintainable, readable, and adaptable?
By using consistent naming conventions for my class functions and variables. I also thoroughly documented my code by adding code comments to each part of my program to ensure I do not lose track of my requirements, since even the creator of a program may forget what they are doing. One of the requirements of this project was to follow the company’s coding guidelines and conventions as part of the scenario. By following those guidelines, it makes the code adaptable to other programs in the company for better efficiency.

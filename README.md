                                          TUTORIAL 6
—-----------------------------------------------------------------------
Name:- Abhay Dubey
Roll No :- 1131
PRN :- BE25CE1131
Batch :- C
ACTIVITY 6


1. Storing College Codes
The program first creates an array that contains hundreds of college codes such as “1002”, “1105”, “2129”, “2136”, etc.
Each code is stored as a string in a large two-dimensional array.
This list acts like a database of college IDs.

2. Storing College Names
Next, the program creates another array of the same size that stores the college names.
Each name is stored at the same index as its corresponding college code.

Example:
At index 0:
College code = 1002,
College name = Government College of Engineering, Amravati

At index 1:
College code = 1005,
College name = Sant Gadge Baba Amravati University, Amravati
This ensures that each code is directly linked to its correct college name.

3. Taking Input From the User
The program asks the user to:

“Enter the college ID or CODE:”
The user types a code such as 1101, 2133, etc.
This input is stored in a character array.

4. Searching for the Entered Code

The program uses a loop to go through the entire collage (college code) list.

For each code:

It compares the user's input with the stored code using the string comparison function strcmp.

If the two strings match, strcmp returns 0, which means the code has been found.

5. Displaying the Correct College Name

When a match is found:

The program prints the college name stored in the add array at the same index where the code matched.

After printing the college name, it stops searching further.

This way, the correct college name is displayed for the code entered.

6. If No Code Matches

If the loop finishes and no match is found:

The program prints:

“Route not found”

This means the user entered a college ID that is not available in the stored list.

Summary (simple explanation)

The program stores a list of college IDs and their corresponding names.

The user enters an ID.

The program checks each stored code one by one.

If it finds a match, it prints the college name.

If no match is found, it prints an error message.

Reference : https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm
     Google

# EEL-tut-6-final

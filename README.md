# Loop in cpp
Aim: To study and implement different types of loops in C++

Tools: VS Code

# Theory:

`Loops in C++:`
Loops are powerful tools in C++ that let you repeat a block of code multiple times until a certain condition becomes false. They help automate tasks that would otherwise require writing the same code over and over again. Loops are essential for managing repetitive processes, especially when working with collections of data. Two of the most commonly used loops in C++ are the for loop and the while loop.

`for Loop in C++:`
Use a for loop when you already know how many times you want the loop to run. A for loop is structured into three parts:

Initialization – sets the starting point of the loop variable
Condition – keeps the loop running as long as this condition is true
Increment/Decrement – updates the loop variable after every cycle

The for loop is compact and organized, making it ideal for tasks like counting, generating sequences, summing values, or iterating through arrays.

`while Loop in C++:`
A while loop is better suited for situations where the number of repetitions isn’t known in advance. It continues running as long as the specified condition is true.

The condition is checked before each iteration.
If the condition is false at the beginning, the loop body may never run.
The loop keeps going until the condition becomes false, often based on user input or dynamic data changes.

`Nested for Loop in C++:`
A nested for loop means placing one for loop inside another. This is especially useful for working with multi-level data structures such as 2D arrays, tables, or patterns. For example, you might use a nested loop to print a grid or to perform actions across rows and columns.

# Pattern Printing in C++:
Pattern printing in C++ involves using nested loops to display output in structured shapes using characters, numbers, or symbols.

# Program 1 For Loop: Print Even Numbers up to 10

In this program, we will print the even numbers from 0 to 10 using a for loop, which will iterate from 0 to 10. The if statement will check to see if the number is divisible by 2.

Algorithm:

Start

Let i = 0.

Repeat while i <= 10:

If i % 2 == 0, Print(i).

Let i = i + 1.

Stop


# Program 2 For Loop: Print "SIT" 5 times.
In this program, we will print the word "SIT" using a for loop that runs from 0 to 4, and then repeats the process five times.

Algorithm:

Start

Let i = 0.

Repeat while i < 5:

Printing "SIT".

Let i be i + 1.

Stop


# Program 3 While Loop: Print 1 to 20.
In this program, we will use a while loop to print from 1 to 20. The process will start from 0 and increment to 20.

Algorithm:

Start
Let n = 0.

While n < 20:

Let n++;(n = n + 1)

Print n

Stop


# Program 4 While Loop: Password Checker
This program sets a password (minimum of 8 characters), confirms the password, and then allows the user to check the password repeated or exit by entering 'x'.

Algorithm:

Start

Prompt the user to enter a password.

If password length < 8, prompt again.

Prompt to confirm password.

If not matching, prompt again.

When confirmed, enter verification loop:

Prompt user to enter password, or enter 'x' to exit.

If password matches, print "Access Granted".

If 'x', print "Exited"; Stop.

Else, print "Wrong Password".

loop repeats untill x is entered.


# Program 5 While Loop: Reverse an Entered Number
The program reverses the number simply by taking digits from the last and printing them in reverse order we use %(Modulus) to get last digit and /(division) to update entered number.

Algorithm:

Start

Input number.

While number != 0

Get last digit using number % 10.

Print the digit.

Floor divide number by 10.

Stop


# Program 6 Nested For:
This program shows how nested loops work in C++. The outer loop runs twice, and for each iteration, the inner loop runs three times, printing "Outer" and "Inner" values to demonstrate flow control.

Algorithm:

Start program.

Loop i from 1 to 2.

Print outer loop value.

Loop j from 1 to 3.

Print inner loop value.

End inner loop.

End outer loop.

End 


# Program 7 Simple Pyradmid:
Prints a left-aligned triangle of stars. The outer loop runs n times, and for each row, the inner loop prints stars equal to the row number, forming an incremental star pattern line by line.

Algorithm:

Start program.

Input n.

Loop i from 1 to n.

Loop j from 1 to i.

Print star.

End inner loop.

Move to new line.

End 


# Program 8 Flipped Simple Pyramid:
Prints a right-aligned triangle. For each row, spaces are printed first to push the stars to the right, then stars are printed in increasing order using nested loops, creating a slanted effect.

Algorithm:

Start program.

Input n.

Loop i from 1 to n.

Print n-i spaces.

Print i stars.

Move to new line.

End loop.

End 

# Program 9 Flyod Number:
This program prints Floyd’s triangle using numbers. A counter starts from 1 and prints increasing numbers row-wise, with each row containing one more number than the last using nested loops.

Algorithm:

Start program.

Input n.

Set counter c = 1.

Loop i from 1 to n.

Loop j from 1 to i.

Print and increment c.

Move to new line.

End 

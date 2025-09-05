# Workshop #1 - Introduction to Programming

This project implements a C++ program that solves basic programming exercises.

## Description

The program displays a main menu with **4 points**, each corresponding to a different exercise:

1. **Point 1**

A program that reads three grades from a student and calculates that student's final grade.
    
   - Reads three student grades.  
   - Calculates and displays the final average.  
   - Validates that grades are within the range [0.0 – 5.0].

2. **Point 2**

A student's final grade is the weighted average of three grades: the practical grade, which accounts for 30% of the total, the theoretical grade, which accounts for 60%, and the participation grade, which accounts for the remaining 10%. Write a program that reads a student's three grades from the standard input and writes their final grade as output. The screen should indicate which grade to enter (practical, theoretical, and participation) and display the student's name and final grade.

   - Requests the student’s name.  
   - Reads three grades:  
     - Practical → 30%  
     - Theoretical → 60%  
     - Participation → 10%  
   - Calculates the weighted final grade.  
   - Displays the student’s name and final grade.  
   - Validates the grade range [0.0 – 5.0].

3. **Point 3**

A program that reads the two legs of a right triangle from standard input and writes its hypotenuse to standard output.

   - Reads the two legs of a right triangle.  
   - Calculates the hypotenuse using the pythagorean theorem.  
   - Validates that the legs are greater than 0.

4. **Point 4**

A calculator needs to be implemented with the following operations: addition, subtraction, division, multiplication, exponentiation, and root. For each arithmetic operation, the program must request two integers. It should be noted that the square root requests only one integer.

## How to Run

1. **Download it**
2. **In the terminal put the following commands**
   - Compile:
      ```bash
      g++ workshop-1-IP.cpp -o workshop-1-IP
      ```
   - Run it:
      ```bash
      workshop-1-IP.exe
      ```

## Considerations

Make sure you have a C++ compiller installed.

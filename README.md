# Workshop #1 - Introduction to Programming

This project implements a C++ program that solves basic programming exercises.

## Description

The program displays a main menu with **4 points**, each corresponding to a different exercise:

1. **Point 1**  
   - Reads three student grades.  
   - Calculates and displays the final average.  
   - Validates that grades are within the range [0.0 – 5.0].

2. **Point 2**  
   - Requests the student’s name.  
   - Reads three grades:  
     - Practical → 30%  
     - Theoretical → 60%  
     - Participation → 10%  
   - Calculates the weighted final grade.  
   - Displays the student’s name and final grade.  
   - Validates the grade range [0.0 – 5.0].

3. **Point 3**  
   - Reads the two legs of a right triangle.  
   - Calculates the hypotenuse using the **Pythagorean theorem**.  
   - Validates that the legs are greater than 0.

4. **Point 4**  
   Implements a calculator with the following operations:  
   - Addition  
   - Subtraction  
   - Multiplication  
   - Division  
   - Exponentiation  
   - Square root  

   ⚠️ Note: The square root operation only requests one value (radicand).

## ▶️ How to Run

### 1. Compile the program
```bash
g++ main.cpp -o workshop-1-IP

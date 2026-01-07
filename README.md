# Smart Calculator & GPA/SGPA Calculator

A **C++ console-based application** that combines a scientific calculator and a GPA/SGPA calculator with history tracking functionality. Perform arithmetic operations, factorials, powers, square roots, and calculate GPA for multiple courses, saving all operations for future reference.

---

## Features

### Calculator
- Basic operations: **Addition, Subtraction, Multiplication, Division**
- Advanced operations: **Factorial, Square Root, Square, Power**
- Input validation:
  - Prevents division by zero
  - Prevents factorial of negative numbers
  - Prevents square root of negative numbers
- Stores calculation history in `calc_history.txt`

### GPA / SGPA Calculator
- Calculate SGPA for multiple courses
  - Enter **grade points** (e.g., 4.0, 3.67)
  - Enter **credit hours**
- Prevents invalid calculations (e.g., zero total credits)
- Stores GPA history in `gpa_history.txt`

### History Management
- **View Calculator History** from previous calculations
- **View GPA History** from previous GPA calculations

---

## How to Use

1. **Clone the repository** or download the project folder:

```bash
git clone  https://github.com/Salman-Shoaib/Smart-Calculator.git


## 2. Compile and run the program:

g++ -o SmartCalculator main.cpp
./SmartCalculator

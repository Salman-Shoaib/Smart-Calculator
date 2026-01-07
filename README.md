# Smart Calculator & GPA/SGPA Calculator

A **C++ console-based application** that combines a scientific calculator and a GPA/SGPA calculator with history tracking functionality. Perform arithmetic operations, factorials, powers, square roots, and calculate GPA for multiple courses, saving all operations for future reference.

---

## Features

### Calculator

* Basic operations: **Addition, Subtraction, Multiplication, Division**
* Advanced operations:

  * **Factorial**
  * **Square Root**
  * **Square**
  * **Power**
* Input validation:

  * Prevents division by zero
  * Prevents factorial of negative numbers
  * Prevents square root of negative numbers
* Stores calculation history in `calc_history.txt`

### GPA / SGPA Calculator

* Calculate SGPA for multiple courses
* Enter:

  * **Grade points** (e.g., 4.00, 3.67)
  * **Credit hours**
* Prevents invalid calculations (e.g., zero total credits)
* Stores GPA/SGPA history in `gpa_history.txt`

### History Management

* View **Calculator History** from previous calculations
* View **GPA/SGPA History** from previous GPA calculations

---

## How to Use

### 1️. Clone the Repository

```bash
git clone https://github.com/Salman-Shoaib/Smart-Calculator.git
```

### 2️. Compile the Program

```bash
g++ PF-Cal.cpp -o a.exe
```

### 3️. Run the Program

```bash
./a.exe
```

---

## Main Menu Options

```
1 → Calculator
2 → GPA / SGPA Calculator
3 → View Calculator History
4 → View GPA History
5 → Exit Program
```

---

## Calculator Menu Options

```
1 → Addition
2 → Subtraction
3 → Multiplication
4 → Division
5 → Factorial
6 → Square Root
7 → Square
8 → Power
```

---

## GPA / SGPA Calculator Usage

* Enter the **number of courses**
* For each course, input:

  * Grade points
  * Credit hours
* SGPA is calculated automatically
* Result is saved in `gpa_history.txt`

---

## Project Files

* `PF-Cal.cpp` → Main C++ source code
* `calc_history.txt` → Stores calculator history *(auto-created)*
* `gpa_history.txt` → Stores GPA/SGPA history *(auto-created)*

---

## Exception Handling

The program safely handles:

* Division by zero
* Factorial of negative numbers
* Square root of negative numbers
* Invalid menu choices or operators

---

## Future Improvements

* Add **CGPA calculation** for multiple semesters
* Implement a **GUI version** for better user interaction
* Include more **scientific functions** such as:

  * Trigonometry
  * Logarithms

---

## Author

**Salman Shoaib**
Lahore, Pakistan

GitHub: [https://github.com/Salman-Shoaib]

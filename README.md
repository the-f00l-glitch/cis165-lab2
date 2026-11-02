# CIS-165 Lab 2: C++ Exercises — Build, Test, and Explain

**Course Section:** CIS-165-B030  
**Student Name:** Jeydann Diaz  
**Repository:** cis165-lab2

\---

## 1\. Initial Program Plans

### Plan for `sum.cpp`

* **Values Needed:** Two integer variables to store the starting values (50 and 100), and one integer variable named `total` to store the result.
* **Calculation:** Add the two integer variables together using the `+` operator and assign the result to `total`.
* **Output:** Display a descriptive text label followed by the value of `total`.

### Plan for `mpg.cpp`

* **Values Needed:** Two floating-point variables (`double`) to store gallons of fuel (16.0) and miles traveled (312.0), plus one `double` variable named `mpg` for the final calculation.
* **Calculation:** Divide total miles by total gallons (`miles / gallons`) and assign the quotient to `mpg`.
* **Output:** Display labeled lines showing miles driven, gallons used, and calculated MPG with units (`miles per gallon`).

\---

## 2\. Compilation and Execution Instructions

### Option A: Using `g++` (Command Line)

To compile each program separately using `g++` with C++17 standards and full warnings enabled, run:

```bash
g++ -std=c++17 -Wall -Wextra sum.cpp -o sum
g++ -std=c++17 -Wall -Wextra mpg.cpp -o mpg


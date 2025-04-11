# 📊 Algorithms & Data Structures: Sorting, Searching, and Postfix Evaluation in C++

This project demonstrates core concepts in **Algorithms and Data Structures (ADS)** using C++, including:
- Classic **sorting** (quicksort, mergesort)
- **Searching** (binary search)
- An advanced **postfix expression evaluator** using stacks and arrays
- Implementation of **custom operators** in postfix format
- Time & space complexity analysis
- Application of data structures to solve real-world math expression problems

---

## 📅 Project Duration

**December 2023 – January 2024**

---

## 📌 Features

### ✅ Sorting & Searching Algorithms

- **Quicksort**: Efficient divide-and-conquer sorting method
- **Mergesort**: Stable recursive sorting technique with O(n log n) time complexity
- **Binary Search**: Fast searching in sorted arrays (O(log n))

### 🧠 Postfix Expression Evaluator

- Evaluates postfix expressions with:
  - Constants and variables (A-Z)
  - Operators: `+`, `-`, `*`, `/`, `%`, `^`, `=`, `!`
  - Custom operators: `@`, `#`, `&`
- Uses **stack-based evaluation** and an **array-based symbol table**
- Accepts user-defined values for variables

### 🧮 Custom Operators Implemented

| Operator | Description |
|----------|-------------|
| `@`      | Multiply val2 by 2 and add val1 |
| `#`      | Subtract 3 × val1 from val2 |
| `&`      | Add val2 and half of val1 |

---

## 🔁 Data Structures Used

- **Stack**: For postfix evaluation and managing operands
- **Array**: Symbol table storing A–Z variable values
- **Recursion**: For factorial calculation (`!` operator)

---
## 🧪 Sample Usage

```bash
Enter postfix expression: AB+!
Enter value for variable A: 3
Enter value for variable B: 2
Postfix evaluation: 120

## // A simplified snippet
stack<int> st;
st.push(val2 + val1); // Example operation
```

## Limitations & Future Work
❌ No error handling for malformed expressions or division by zero

🧪 Input validation is minimal — assumes user inputs are correct

🧠 Possible improvements:

Implement try-catch for runtime safety

Expand operator support or allow user-defined operators

Add GUI for better interaction

## 🧠 Learning Outcomes
Gained mastery of fundamental algorithms & complexity analysis

Applied OOP and modular design in C++

Learned to evaluate mathematical expressions programmatically

Practiced converting pseudocode to efficient, working code

## 👤 Author
Losheni Meenakshi Sundaram
- Student at University of London , Singapore Institute of Management
- 📫 Email: losheni.ms@gmail.com

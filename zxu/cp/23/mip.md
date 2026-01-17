Here is a simple C program that reads two **3×3 matrices** from the user and prints their **sum**.

```c
#include <stdio.h>

int main() {
    int A[3][3], B[3][3], Sum[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate sum of matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display the result
    printf("Sum of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Explanation (brief):

* Two 3×3 matrices are stored in `A` and `B`.
* Their sum is stored in `Sum`.
* Nested `for` loops are used for input, calculation, and output.

If you want a **shorter version** or one with **comments removed for exams**, just let me know.



# 2

Sure 🙂 Let’s go step by step and keep everything **simple and clear**, as this is usually expected in exams.

---

## 1. What is a Matrix?

A **matrix** is a collection of numbers arranged in **rows and columns**.

A **3 × 3 matrix** has:

* **3 rows**
* **3 columns**

It looks like this:

[
\begin{bmatrix}
a_{11} & a_{12} & a_{13} \
a_{21} & a_{22} & a_{23} \
a_{31} & a_{32} & a_{33}
\end{bmatrix}
]

---

## 2. How Matrices Are Entered in the Program

When the program asks the user to enter a 3×3 matrix, the user types **9 numbers**.

### Example: First Matrix

```
1 2 3
4 5 6
7 8 9
```

This means:
[
A =
\begin{bmatrix}
1 & 2 & 3 \
4 & 5 & 6 \
7 & 8 & 9
\end{bmatrix}
]

### Example: Second Matrix

```
9 8 7
6 5 4
3 2 1
```

[
B =
\begin{bmatrix}
9 & 8 & 7 \
6 & 5 & 4 \
3 & 2 & 1
\end{bmatrix}
]

---

## 3. What Does “Sum of Two Matrices” Mean?

To add two matrices:

* Add **corresponding elements**
* Both matrices must be of the **same order** (3×3 here)

### Formula:

[
\text{Sum}[i][j] = A[i][j] + B[i][j]
]

---

## 4. Example of Matrix Addition

[
A =
\begin{bmatrix}
1 & 2 & 3 \
4 & 5 & 6 \
7 & 8 & 9
\end{bmatrix}
\quad
B =
\begin{bmatrix}
9 & 8 & 7 \
6 & 5 & 4 \
3 & 2 & 1
\end{bmatrix}
]

### Resulting Sum Matrix:

[
\text{Sum} =
\begin{bmatrix}
10 & 10 & 10 \
10 & 10 & 10 \
10 & 10 & 10
\end{bmatrix}
]

---

## 5. Basic Explanation of the Code

### 1️⃣ Header File

```c
#include <stdio.h>
```

* Needed for input (`scanf`) and output (`printf`).

---

### 2️⃣ Variable Declaration

```c
int A[3][3], B[3][3], Sum[3][3];
int i, j;
```

* `A` → first matrix
* `B` → second matrix
* `Sum` → stores result
* `i` and `j` → loop counters for rows and columns

---

### 3️⃣ Input of First Matrix

```c
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        scanf("%d", &A[i][j]);
    }
}
```

* Outer loop → rows
* Inner loop → columns
* Reads 9 elements into matrix `A`

---

### 4️⃣ Input of Second Matrix

Same logic as the first matrix, but values are stored in `B`.

---

### 5️⃣ Matrix Addition

```c
Sum[i][j] = A[i][j] + B[i][j];
```

* Adds corresponding elements of both matrices
* Stores the result in `Sum`

---

### 6️⃣ Displaying the Result

```c
printf("%d\t", Sum[i][j]);
```

* Prints elements row by row in matrix form

---

## 6. Final Output Format

For the example input, output will look like:

```
Sum of the two matrices:
10  10  10
10  10  10
10  10  10
```

---

## 7. One-Line Exam-Friendly Definition

> **Matrix addition** is the process of adding corresponding elements of two matrices of the same order.

---

If you want, I can also:

* Simplify this explanation for **short-answer exams**
* Provide a **dry run table**
* Explain **why nested loops are used**

Just tell me 👍

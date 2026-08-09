Yes, there is a **very significant overlap** between the older "Data and File Structures" course and MCSL-209. In fact, the practical examiners often ask the same concepts, just with a different course code. If you prepare well for classic data structures and their implementation in C, you'll be ready for 90% of the practical and viva.

I'd suggest we prepare this as if you were preparing for an engineering college DSA lab exam rather than just memorizing IGNOU questions.

## Phase 1: Theory (Viva)

These are the topics I'd expect an examiner to cover.

### Module 1: Foundations (Very Frequently Asked)

These are almost guaranteed.

* What is an algorithm? A series of well defined, unambigous and a finite number of steps that have to be executed in the right order solve a certain problem or perform a particular task.
* Characteristics of a good algorithm
* What is a data structure?
* Why do we need data structures?
* Difference between primitive and non-primitive data structures
* Static vs Dynamic data structures
* Linear vs Non-linear data structures
* ADT (Abstract Data Type)
* Compile time vs Run time memory allocation

---

### Module 2: Complexity Analysis (Almost Guaranteed)

Most students fear this section.

Know:

* Time Complexity
* Space Complexity
* Big O
* Big Ω (Omega)
* Big Θ (Theta)

Questions like:

> What is the time complexity of linear search?

> Why is binary search O(log n)?

> Difference between O(n²) and O(n log n)

> Best, Worst and Average case

You should be able to analyze loops like

```c
for(i=0;i<n;i++)
```

or

```c
for(i=1;i<n;i*=2)
```

without hesitation.

---

## Module 3: Arrays

Know

* Advantages
* Disadvantages
* Traversal
* Insertion
* Deletion
* Searching
* Sorting basics

Practicals

* Insert element
* Delete element
* Linear Search
* Binary Search

---

## Module 4: Linked Lists

Very important.

Know

* Why linked list?
* Self-referential structure
* Node
* Pointer
* Head pointer

Types

* Singly Linked List
* Doubly Linked List
* Circular Linked List
* Circular Doubly Linked List

Operations

* Insert beginning
* Insert end
* Insert position
* Delete beginning
* Delete end
* Delete position
* Search
* Reverse

Typical viva

Why linked list over array?

---

## Module 5: Stack

Very common.

Know

LIFO

Implementation

* Array
* Linked List

Operations

* Push
* Pop
* Peek
* Overflow
* Underflow

Applications

* Function calls
* Parenthesis matching
* Expression conversion
* Undo operation

---

## Module 6: Queue

Know

FIFO

Types

* Linear Queue
* Circular Queue
* Priority Queue
* Deque

Operations

* Insert
* Delete

Applications

CPU Scheduling

Printer Queue

---

## Module 7: Trees

One of the favorite viva topics.

Know

* Root
* Parent
* Child
* Leaf
* Degree
* Height
* Level
* Internal node
* External node

Traversal

* Preorder
* Inorder
* Postorder
* Level order

Questions

Difference between tree and graph?

What is a binary tree?

---

## Module 8: Binary Search Tree (BST)

Must know.

Operations

* Insert
* Delete
* Search

Time Complexity

Average

O(log n)

Worst

O(n)

Examiner may ask

Why can BST become slow?

---

## Module 9: AVL Tree

Very common viva topic.

Need to know

What is AVL?

Why introduced?

Balance Factor

```
BF = Height(left)-Height(right)
```

Possible values

-1

0

+1

Rotations

LL

RR

LR

RL

Don't worry—we'll learn to identify each in seconds.

---

## Module 10: Red-Black Tree

Usually conceptual.

Know

Properties

* Every node red/black
* Root black
* Red node can't have red child
* Equal black height

Why use Red-Black instead of AVL?

Excellent viva question.

---

## Module 11: Heap

Know

Max Heap

Min Heap

Insertion

Deletion

Heapify

Applications

Priority Queue

Heap Sort

---

## Module 12: Hashing

Common.

Know

Hash Function

Collision

Collision Resolution

* Chaining
* Linear Probing
* Quadratic Probing

Questions

Why collisions happen?

---

## Module 13: Graph

Know

Vertex

Edge

Directed

Undirected

Weighted

Traversal

DFS

BFS

Applications

Social Networks

GPS

Compiler

---

## Module 14: Sorting

Know all major sorts.

Bubble

Selection

Insertion

Merge

Quick

Heap

Know

Best

Worst

Average

Stable?

In-place?

Typical viva

Why is Merge Sort O(n log n)?

Why is Quick Sort sometimes O(n²)?

---

## Module 15: Searching

Linear

Binary

Time Complexity

Implementation

Requirements

Binary Search needs sorted data.

---

# Practical Programs

These are the programs that frequently appear:

✓ Array insertion

✓ Array deletion

✓ Linear Search

✓ Binary Search

✓ Bubble Sort

✓ Selection Sort

✓ Insertion Sort

✓ Stack using Array

✓ Queue using Array

✓ Circular Queue

✓ Singly Linked List

✓ Doubly Linked List

✓ Circular Linked List

✓ Polynomial Addition

✓ BST insertion

✓ BST deletion

✓ BST traversal

✓ DFS

✓ BFS

✓ Hash Table

---

# Difficulty Ranking

**Level 1 (Must Master First):**

* Arrays
* Searching
* Sorting
* Stack
* Queue
* Linked Lists

**Level 2 (Next Priority):**

* Trees
* BST
* Recursion
* Complexity Analysis

**Level 3 (Conceptual but Important):**

* AVL Trees
* Red-Black Trees
* Heaps
* Hashing
* Graphs

---

# A Study Plan

Rather than studying topic by topic, I suggest we prepare the way an examiner thinks:

1. **Core Concepts & Complexity** – algorithms, data structures, asymptotic notation, recursion.
2. **Linear Data Structures** – arrays, linked lists, stacks, queues, with C implementations and common pitfalls.
3. **Trees** – binary trees, BSTs, traversals, AVL trees, Red-Black trees, heaps.
4. **Searching, Sorting & Hashing** – implementations plus time/space complexity.
5. **Graphs** – BFS, DFS, representations, and applications.
6. **Mock Practical & Viva** – complete lab tasks and oral questioning under exam conditions.

I also recommend we build a **one-page complexity cheat sheet** covering the time and space complexity of all common algorithms and data structures. It's one of the highest-value revision tools before a practical exam.

I think we should start with **Algorithms, Data Structures, and Complexity** before writing any code. Once you can answer "Why is this algorithm O(n log n)?" or "Why use a linked list instead of an array?", every practical becomes much easier because you'll understand the reasoning instead of just memorizing code. After that, we'll implement every major data structure in C and practice the kinds of viva questions that typically accompany each program.


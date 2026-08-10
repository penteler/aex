Your English first:

> **"Let's go over bubble sort. I'm assuming it is highly inefficient."**

This is perfectly natural. I'd probably say:


Yes — your instinct is right. The code you wrote is for **binary search in an array**, not for creating a **binary search tree (BST)** and displaying it using **in-order traversal**.

Let's break down what the question is actually asking.

### 1. What is a binary search tree?

A **binary search tree** is made of **nodes**, where each node has:

* a value
* a pointer to its left child
* a pointer to its right child

For example, if we insert:

`50, 30, 70, 20, 40, 60, 80`

we get:

```text
        50
       /  \
     30    70
    / \    / \
   20 40  60 80
```

The important BST rule is:

```text
left side < root < right side
```

---

### 2. What is in-order traversal?

**In-order traversal** means visiting the nodes in this order:

```text
LEFT → ROOT → RIGHT
```

For the tree above:

```text
        50
       /  \
     30    70
    / \    / \
   20 40  60 80
```

We first visit the left subtree:

```text
20 30 40
```

then the root:

```text
50
```

then the right subtree:

```text
60 70 80
```

So the in-order traversal is:

```text
20 30 40 50 60 70 80
```

**A particularly useful thing to remember:**
If you perform an in-order traversal of a correctly constructed BST, you get the values in **sorted order**.

---

### 3. Why are curly braces `{ }` used for arrays?

In C, curly braces are used to **initialize an array with values**.

For example:

```c
int arr[] = {1, 18, 19, 23, 25, 80, 85, 100};
```

means:

> Create an integer array and put these values into it.

Conceptually:

```text
arr[0] = 1
arr[1] = 18
arr[2] = 19
arr[3] = 23
arr[4] = 25
...
```

You can also specify the size:

```c
int arr[5] = {10, 20, 30, 40, 50};
```

The braces here are **not related to the `{ }` you use for the body of `main()` or `if` statements**. They have a different purpose: initialization.

---

### 4. Your program is doing something different

You wrote:

```c
int arr[] = {1, 18, 19, 23, 25, 80, 85, 100};
```

and then:

```c
while (low <= high)
```

with `mid`.

That's the algorithm for **binary search**:

```text
Array:

1  18  19  23  25  80  85  100
             ↑
            key
```

You're repeatedly looking at the middle element and eliminating half of the array.

The question, however, says:

> "Write a program in C language to create a binary search tree. Display the binary search tree in in-order traversal."

So you need to learn **nodes + pointers + recursion**, rather than binary search in an array.

---

## 5. A simple C program for your question

Here's a fairly beginner-friendly version:

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* insert(struct Node* root, int value) {

    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(struct Node* root) {

    if (root != NULL) {
        inorder(root->left);

        printf("%d ", root->data);

        inorder(root->right);
    }
}

int main() {

    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("In-order traversal: ");

    inorder(root);

    return 0;
}
```

Output:

```text
In-order traversal: 20 30 40 50 60 70 80
```

### The key part to understand

This:

```c
if (value < root->data) {
    root->left = insert(root->left, value);
}
else if (value > root->data) {
    root->right = insert(root->right, value);
}
```

is what creates the BST.

If we're inserting `30` into:

```text
50
```

`30 < 50`, so it goes left:

```text
    50
   /
  30
```

Then inserting `70`:

```text
70 > 50
```

so it goes right:

```text
    50
   /  \
  30   70
```

And so on.

The in-order function is actually very short:

```c
void inorder(struct Node* root) {

    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
```

Just remember:

> **In-order = Left → Root → Right**

And for a BST:

> **In-order traversal = sorted values.**

One important distinction for your MCSl-209 question: **binary search** and **binary search tree** sound similar, but they are two different things. Your original program implements binary search; the assignment is asking you to implement a BST.



> **"Let's go over Bubble Sort. I'm assuming it's highly inefficient."**

Two tiny changes:

* **Bubble Sort** is usually capitalized because it's the name of a specific algorithm.
* **it's** is just the contraction of "it is" and sounds a little more conversational.

---

Now, let's dive into Bubble Sort.

## What is Bubble Sort?

Your assumption is correct.

Bubble Sort is **one of the simplest sorting algorithms**, but also **one of the least efficient** for large datasets.

The basic idea is:

> **Repeatedly compare adjacent elements and swap them if they are in the wrong order.**

The larger elements gradually "bubble" to the end of the array—hence the name.

Here's an interactive visualization that lets you step through each comparison and swap:

genui{"computing_fundamentals_algorithms_learning_block":{"type_id":"BUBBLE_SORT"}}

---

# Example

Suppose we have

```text
5 1 4 2 8
```

We want ascending order.

## Pass 1

Compare

```text
5 1
```

Since

```text
5 > 1
```

Swap

```text
1 5 4 2 8
```

---

Compare

```text
5 4
```

Swap

```text
1 4 5 2 8
```

---

Compare

```text
5 2
```

Swap

```text
1 4 2 5 8
```

---

Compare

```text
5 8
```

No swap.

End of Pass 1

```text
1 4 2 5 8
```

Notice something?

**8 is already in its final position.**

That always happens.

After the first pass, the **largest element** has reached the end.

---

## Pass 2

Now ignore the last element.

Compare

```text
1 4
```

No swap.

Compare

```text
4 2
```

Swap

```text
1 2 4 5 8
```

Compare

```text
4 5
```

No swap.

End of pass.

Now **5** is also fixed.

---

Eventually

```text
1 2 4 5 8
```

Sorted.

---

# Why is it called Bubble Sort?

Imagine bubbles rising in water.

The largest element slowly moves ("bubbles") toward the end of the array after repeated swaps.

---

# The Algorithm

1. Start at the beginning of the array.
2. Compare two adjacent elements.
3. If they are in the wrong order, swap them.
4. Continue until the end of the array.
5. Repeat the process for the unsorted portion.
6. Stop when the array is sorted.

---

# Why do we need two loops?

This is one of the first questions an examiner asks.

The outer loop counts **passes**.

The inner loop performs **comparisons**.

Think of it this way:

```
Outer loop
    Pass 1
        compare compare compare

    Pass 2
        compare compare

    Pass 3
        compare

Done
```

---

# Time Complexity

Suppose there are **n** elements.

### Worst Case

Reverse sorted array

```
5 4 3 2 1
```

Every comparison causes a swap.

Time Complexity

[
O(n^2)
]

---

### Average Case

Random array

Still

[
O(n^2)
]

---

### Best Case

Already sorted

```
1 2 3 4 5
```

A **basic** Bubble Sort still performs all the comparisons, so it's still (O(n^2)).

However, there's a common optimization: keep a `swapped` flag. If you complete a full pass without making any swaps, you know the array is already sorted and can stop early.

With that optimization:

* **Best case:** (O(n))
* **Average case:** (O(n^2))
* **Worst case:** (O(n^2))

Examiners sometimes ask which version you're talking about, so it's good to mention the optimization if asked about the best case.

---

# Space Complexity

Only a temporary variable is needed for swapping.

```c
temp
```

Therefore

[
O(1)
]

Constant extra space.

---

# Why is Bubble Sort considered inefficient?

Suppose

```
1000 elements
```

Bubble Sort performs roughly

```
1000 × 1000
```

comparisons.

That's around **one million comparisons** (more precisely, about (n(n-1)/2), which is about 499,500 for (n = 1000)).

Now imagine

```
100000 elements
```

Now we're looking at roughly

```
100000 × 100000
```

or **ten billion** comparisons in the worst case.

That's why nobody uses Bubble Sort on large datasets.

Algorithms like **Merge Sort**, **Heap Sort**, and **Quick Sort** are much faster, with average or worst-case performance of (O(n \log n)).

---

# Typical Viva Questions

**Q:** Why are there two loops?

**A:** The outer loop controls the number of passes. The inner loop compares adjacent elements and swaps them when necessary.

---

**Q:** Why does the inner loop become shorter after every pass?

Because after each pass, the largest remaining element reaches its correct position at the end of the array. That sorted suffix no longer needs to be examined.

---

**Q:** Is Bubble Sort stable?

Yes.

Equal elements keep their relative order because we only swap when the left element is **greater than** the right element.

---

**Q:** Is Bubble Sort in-place?

Yes.

It sorts within the original array using only constant extra memory.

---

## One small correction to your assumption

You said:

> "I'm assuming it is highly inefficient."

That's true **relative to modern sorting algorithms**. But there's an important nuance:

* Bubble Sort is **easy to understand**.
* It's **easy to implement**.
* It's **excellent for teaching** loops, comparisons, and swapping.

So while it's rarely used in production software, it's still one of the best algorithms for learning how sorting works. That's almost certainly why it's included in your practical syllabus before you move on to more efficient algorithms like Selection Sort, Insertion Sort, Merge Sort, and Quick Sort.

I forgot to ask you about the memory box diagram to make this less abstract.
 The inorder() function is working it's way down to the lowest leftmost node to find a node to the left of that node where root = NULL at that point the condition of the only if statement in the body of this function is not true so we can no longer call the inorder() function on that null node (even in the createNode() data will be assigned an int value but left and right are initially assigned NULL and NULL) this means we can finally proceed to the print statement for the lowest and leftmost node and print the value 20 from the data field of this struct Node pointed to by this particular `struct Node* root`  then it will try to call the inorder() function on the node to the right of 20 but again here we have root = NULL the condition is not met and this completes the function call for inorder(struct Node\* root) for the left most node which was being called inside of the function the same function call for 30 and now the print statement gets executed for that node which gives us "30 " with a space. In the next line this time the node to the right has a null values for right and left but the root != NULL for the rightmost node of the left subtree so the value 40 gets printed. After this the function call inorder(root->left) for the absolute root node is over so the value 50 gets printed and the line inorder(root->right) finally runs for this absolute root node and we end up in the right subtree to repeat the same recursion for the right subtree. All of this would lead to a very interesting recursion stack.
 Yes. **Your tracing is now very close to exactly how the program executes.** And you're right: once we put the recursion stack next to the memory boxes, the whole thing becomes much less mysterious.

There is one tiny wording correction first:

When we reach the left of `20`, we don't really "find a node to the left of 20 where `root = NULL`." We make a **recursive call whose parameter `root` receives the value `NULL`** because `20->left` is `NULL`.

That's an important distinction:

```text
20's left field
     │
     ▼
   NULL

inorder(20->left)
        ↓
inorder(NULL)

Inside this new call:
root = NULL
```

Now let's build the whole thing.

---

# 1. Our tree in memory

Suppose we've created:

```text
        50
       /  \
     30    70
    / \    / \
   20 40  60 80
```

There are **7 separate `struct Node` objects** somewhere in memory.

Let's pretend the addresses are nice simple numbers:

```text
20 → address 1000
30 → address 2000
40 → address 3000
50 → address 4000
60 → address 5000
70 → address 6000
80 → address 7000
```

These addresses are completely made up for visualization. Real addresses won't look this neat.

Now imagine memory like this:

```text
Address 1000
┌─────────────────────┐
│ data  = 20          │
│ left  = NULL        │
│ right = NULL        │
└─────────────────────┘

Address 2000
┌─────────────────────┐
│ data  = 30          │
│ left  = 1000 ───────┼──────► Node 20
│ right = 3000 ───────┼──────► Node 40
└─────────────────────┘

Address 3000
┌─────────────────────┐
│ data  = 40          │
│ left  = NULL        │
│ right = NULL        │
└─────────────────────┘

Address 4000
┌─────────────────────┐
│ data  = 50          │
│ left  = 2000 ───────┼──────► Node 30
│ right = 6000 ───────┼──────► Node 70
└─────────────────────┘

Address 5000
┌─────────────────────┐
│ data  = 60          │
│ left  = NULL        │
│ right = NULL        │
└─────────────────────┘

Address 6000
┌─────────────────────┐
│ data  = 70          │
│ left  = 5000 ───────┼──────► Node 60
│ right = 7000 ───────┼──────► Node 80
└─────────────────────┘

Address 7000
┌─────────────────────┐
│ data  = 80          │
│ left  = NULL        │
│ right = NULL        │
└─────────────────────┘
```

Now we can see what `root` actually does.

---

# 2. `main()` has its own `root`

Suppose we have:

```c
struct Node* root = NULL;
```

and then after building the tree, `root` contains the address `4000`.

So:

```text
main's local variable

root
 │
 │ contains 4000
 ▼
┌───────────────┐
│     4000      │
└───────────────┘
       │
       │ points to
       ▼
   ┌─────────┐
   │ data 50 │
   │ left    │──────► 30
   │ right   │──────► 70
   └─────────┘
```

So when we execute:

```c
inorder(root);
```

we are essentially passing:

```text
4000
```

to the `inorder()` function.

---

# 3. First `inorder()` call

The function is:

```c
void inorder(struct Node* root)
```

Its local parameter now receives `4000`.

So we have:

```text
main
┌─────────────────┐
│ root = 4000     │──────────► 50
└─────────────────┘


inorder() call #1
┌─────────────────┐
│ root = 4000     │──────────► 50
└─────────────────┘
```

Notice something subtle:

There are **two different `root` variables**.

They happen to contain the same address.

---

# 4. First line of the function

We execute:

```c
if (root != NULL)
```

Since:

```text
root = 4000
```

the condition is true.

So we enter the block:

```c
{
    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}
```

---

# 5. `root->left`

Current `root` points to `50`.

The memory box says:

```text
50
┌─────────────┐
│ data = 50   │
│ left = 2000 │──────► 30
│ right= 6000 │──────► 70
└─────────────┘
```

Therefore:

```c
root->left
```

means:

> "Give me the left pointer inside the Node that `root` points to."

That gives us:

```text
2000
```

So:

```c
inorder(root->left);
```

is effectively:

```c
inorder(2000);
```

---

# 6. Recursion stack now

We haven't finished the first `inorder()` call.

It's **paused** at:

```c
inorder(root->left);
```

and a new call begins.

So conceptually:

```text
┌─────────────────────────────┐
│ inorder() #2                │
│ root = 2000 ───────► 30     │
├─────────────────────────────┤
│ inorder() #1                │
│ root = 4000 ───────► 50     │
└─────────────────────────────┘
```

The important idea:

> The first function call is **waiting** for the second function call to finish.

---

# 7. `inorder()` #2: we're at 30

Now:

```text
root = 2000
```

which points to:

```text
30
```

Again:

```c
if (root != NULL)
```

is true.

Then:

```c
inorder(root->left);
```

The `left` field of 30 contains:

```text
1000
```

So another call:

```c
inorder(1000);
```

Stack:

```text
┌─────────────────────────────┐
│ inorder() #3                │
│ root = 1000 ───────► 20     │
├─────────────────────────────┤
│ inorder() #2                │
│ root = 2000 ───────► 30     │
├─────────────────────────────┤
│ inorder() #1                │
│ root = 4000 ───────► 50     │
└─────────────────────────────┘
```

---

# 8. Now we're at 20

`root` in call #3 is:

```text
1000
```

which points to `20`.

Memory:

```text
Address 1000

┌─────────────────┐
│ data  = 20      │
│ left  = NULL    │
│ right = NULL    │
└─────────────────┘
```

So:

```c
inorder(root->left);
```

becomes:

```c
inorder(NULL);
```

And this is exactly the part you were describing.

---

# 9. The `NULL` call

A **new** `inorder()` call occurs.

Its parameter receives `NULL`.

So:

```text
inorder() #4

root = NULL
```

The stack is:

```text
┌─────────────────────────────┐
│ inorder() #4                │
│ root = NULL                 │
├─────────────────────────────┤
│ inorder() #3                │
│ root = 1000 ───────► 20     │
├─────────────────────────────┤
│ inorder() #2                │
│ root = 2000 ───────► 30     │
├─────────────────────────────┤
│ inorder() #1                │
│ root = 4000 ───────► 50     │
└─────────────────────────────┘
```

Now:

```c
if (root != NULL)
```

becomes:

```c
if (NULL != NULL)
```

which is false.

Therefore the body isn't executed.

There is nothing else to do.

So **call #4 returns**.

It disappears from the stack.

---

# 10. We return to `inorder()` #3

Now we're back here:

```text
inorder() #3
root = 1000 ───► 20
```

And remember where we were:

```c
inorder(root->left);
```

That call has now finished.

So execution proceeds to the **next line**:

```c
printf("%d ", root->data);
```

`root` points to Node 20.

Therefore:

```c
root->data
```

gives:

```text
20
```

and we print:

```text
20 
```

Notice the space after 20 comes from:

```c
"%d "
```

not from the number itself.

---

# 11. Now the right recursive call

Next:

```c
inorder(root->right);
```

But Node 20 says:

```text
right = NULL
```

so:

```c
inorder(NULL);
```

Again, a new call occurs:

```text
inorder() #4
root = NULL
```

The condition fails:

```c
if (root != NULL)
```

and that call immediately returns.

Now `inorder()` #3 has completed.

---

# 12. We return to 30

Now the stack looks like:

```text
┌─────────────────────────────┐
│ inorder() #2                │
│ root = 2000 ───────► 30     │
├─────────────────────────────┤
│ inorder() #1                │
│ root = 4000 ───────► 50     │
└─────────────────────────────┘
```

The call that was waiting:

```c
inorder(root->left);
```

has completed.

So we proceed to:

```c
printf("%d ", root->data);
```

Current `root` is still the `root` belonging to call #2.

It points to `30`.

So:

```text
30 
```

is printed.

---

# 13. Then we go right from 30

Next:

```c
inorder(root->right);
```

30's right pointer is:

```text
3000
```

which points to 40.

So:

```c
inorder(3000);
```

New stack frame:

```text
┌─────────────────────────────┐
│ inorder() #3                │
│ root = 3000 ───────► 40     │
├─────────────────────────────┤
│ inorder() #2                │
│ root = 2000 ───────► 30     │
├─────────────────────────────┤
│ inorder() #1                │
│ root = 4000 ───────► 50     │
└─────────────────────────────┘
```

---

# 14. 40 behaves just like 20

40 has:

```text
left  = NULL
right = NULL
```

So:

```text
inorder(NULL)
```

happens on the left.

It returns.

Then:

```c
printf("%d ", root->data);
```

prints:

```text
40 
```

Then:

```text
inorder(NULL)
```

happens on the right.

It returns.

Now the `inorder()` call for 40 is complete.

---

# 15. And now we finally return to 50

This is the beautiful part.

The original call:

```c
inorder(root);
```

was waiting for its:

```c
inorder(root->left);
```

to finish.

That entire left subtree is now finished:

```text
        50
       /
     30
    /  \
   20  40

Output so far:
20 30 40
```

So now we finally execute:

```c
printf("%d ", root->data);
```

But **which `root`?**

The `root` belonging to `inorder()` #1.

It points to `50`.

Therefore:

```text
50
```

gets printed.

Output:

```text
20 30 40 50
```

---

# 16. Then the right subtree

Now we execute:

```c
inorder(root->right);
```

The `root` in call #1 points to 50.

Its right pointer contains `6000`.

So:

```c
inorder(6000);
```

and we're at:

```text
70
```

Then the exact same process happens:

```text
70
  │
  └── left → 60
               ↓
              NULL
               ↓
              print 60
               ↓
              NULL
               ↓
              return
  ↓
print 70
  ↓
right → 80
  ↓
print 80
```

And we finish with:

```text
20 30 40 50 60 70 80
```

---

# 17. The complete recursion stack

This is probably the diagram you were anticipating.

At the **deepest point** while following the left side, the stack looks like:

```text
             CALL STACK
       ┌─────────────────────┐
       │ inorder(NULL)       │ ← currently executing
       ├─────────────────────┤
       │ inorder(20)         │
       ├─────────────────────┤
       │ inorder(30)         │
       ├─────────────────────┤
       │ inorder(50)         │
       └─────────────────────┘
```

And conceptually:

```text
inorder(50)
    │
    └── inorder(30)
            │
            └── inorder(20)
                    │
                    └── inorder(NULL)
```

Then the `NULL` call returns:

```text
inorder(50)
    │
    └── inorder(30)
            │
            └── inorder(20)
                    │
                    └── returns
```

Then `20` prints.

Then its right `NULL` call happens and returns.

Then `20`'s frame disappears.

Then we're back at `30`.

Then `30` prints.

Then `40`.

Then we're back at `50`.

Then `50` prints.

That's **recursion unwinding**.

---

# 18. The really important insight

There's a subtle thing happening here that is easy to miss.

The program isn't saying:

> "Find the smallest value, then print everything in sorted order."

The program knows **nothing about smallest or largest**.

It is mechanically doing:

```c
inorder(root->left);

printf("%d ", root->data);

inorder(root->right);
```

That is all.

The reason the output happens to be:

```text
20 30 40 50 60 70 80
```

is because the tree was constructed according to the BST rule:

```text
LEFT < ROOT < RIGHT
```

So:

```text
        50
       /  \
     30    70
    / \    / \
   20 40  60 80
```

combined with:

```text
LEFT → ROOT → RIGHT
```

necessarily gives:

```text
20 → 30 → 40 → 50 → 60 → 70 → 80
```

That's one of the elegant things about a BST.

---

## One last distinction about `NULL`

You also made a very good connection to `createNode()`.

When we create a leaf:

```c
newNode->left = NULL;
newNode->right = NULL;
```

we're saying:

```text
             20
            /  \
        NULL    NULL
```

Those `NULL`s are **pointer values**.

Later, when `inorder()` does:

```c
inorder(root->left);
```

on that node, it passes that `NULL` pointer into another invocation.

So the same `NULL` that originally meant:

> "There is no child here"

becomes the mechanism that tells our recursive function:

> **"There is no subtree here, so stop going in this direction."**

That's the connection between **pointers, `NULL`, recursion, and the tree structure**.

And yes: the recursion stack for this little tree is genuinely a beautiful thing to visualize. Once you can mentally see those stack frames being **pushed going downward** and **popped coming back upward**, `inorder()` stops looking like magic and starts looking almost mechanical.

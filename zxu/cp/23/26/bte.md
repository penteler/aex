As per my understanding of a BST. A typical BST is supposed to have a left subtree and a right subtree. Larger values are supposed to be on the right subtree and the smaller values are supposed to be on the left subtree- in other words the parent value cannot be smaller than the next value on the left subtree and the parent value cannot be larger than the value on the right subtree. There are no duplicate values and both left and right subtrees are recursively BSTs themselves.  

A C program to perform **Binary Search** for the value **25** in the sorted array is:

```c
#include <stdio.h>

int main()
{
    int arr[] = {1, 18, 19, 23, 25, 80, 85, 100};
    int n = 8;
    int key = 25;
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element %d found at index %d (Position %d)\n", key, mid, mid + 1);
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element %d not found.\n", key);

    return 0;
}
```

### Output

```
Element 25 found at index 4 (Position 5)
```

### Binary Search Trace

Array:

```
Index:    0   1   2   3   4   5   6   7
Value:    1  18  19  23  25  80  85 100
```

| Step | Low | High | Mid | Value at Mid | Action                     |
| ---- | --- | ---- | --- | ------------ | -------------------------- |
| 1    | 0   | 7    | 3   | 23           | 25 > 23, search right half |
| 2    | 4   | 7    | 5   | 80           | 25 < 80, search left half  |
| 3    | 4   | 4    | 4   | 25           | **Found**                  |

### Time Complexity

* **Best Case:** (O(1))
* **Average Case:** (O(\log n))
* **Worst Case:** (O(\log n))

### Space Complexity

* **Iterative version:** (O(1))
* **Recursive version:** (O(\log n)) (due to the recursion stack)

This is the standard answer expected in most university exams.

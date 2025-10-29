Here’s the **Mermaid flowchart** you requested — designed with the **correct flowchart symbols** (ellipse for Start/Stop, parallelogram for input/output, rectangle for process, diamond for decision):

```mermaid
flowchart TD
    A([Start]) --> B[/Input binary number/]
    B --> C[Set dec = 0, base = 1]
    C --> D{Is binary number > 0?}
    D -->|Yes| E[Set last_digit = binary % 10]
    E --> F[dec = dec + last_digit * base]
    F --> G[base = base * 2]
    G --> H[binary = binary / 10]
    H --> D
    
```

Let's go step-by-step through the full solution — **Algorithm**, **Flowchart (described textually)**, and **C Program** — to convert a **Binary number** to its **Decimal equivalent**.

---

## 🧩 **1. Algorithm: Binary → Decimal Conversion**

**Given:** A binary number (e.g., `1011`)
**To Find:** Its decimal equivalent (e.g., `11`)

---

### **Algorithm Steps**

1. **Start**
2. **Input** a binary number (say `bin`)
3. Initialize:

   * `dec = 0` (to store decimal result)
   * `base = 1` (represents 2⁰ initially)
4. **Repeat while** `bin > 0`

   * `last_digit = bin % 10`
   * `dec = dec + last_digit * base`
   * `base = base * 2`
   * `bin = bin / 10`
5. **Print** the value of `dec`
6. **Stop**

---

## 🧭 **2. Flowchart (Textual Description)**

You can draw this as a simple flowchart using these steps:

```
   ┌────────────────────────┐
   │        START           │
   └───────┬────────────────┘
           │
           ▼
 ┌─────────────────────┐
 │ INPUT binary number │
 └────────┬────────────┘
          │
          ▼
 ┌────────────────────────────┐
 │ dec = 0, base = 1          │
 └────────┬───────────────────┘
          │
          ▼
 ┌──────────────────────────────┐
 │ Is binary number > 0 ?       │
 └───────┬──────────────────────┘
         │YES
         ▼
 ┌──────────────────────────────┐
 │ last_digit = bin % 10        │
 │ dec = dec + last_digit*base  │
 │ base = base * 2              │
 │ bin = bin / 10               │
 └────────┬─────────────────────┘
          │
          └───> Go back to test

          │NO
          ▼
 ┌────────────────────────────┐
 │ PRINT decimal value (dec)  │
 └────────┬───────────────────┘
          │
          ▼
   ┌────────────────────────┐
   │         STOP            │
   └────────────────────────┘
```

---

## 💻 **3. C Program**

```c
#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Equivalent Decimal Number: %d\n", decimal);
    return 0;
}
```

---

### **Example Run**

```
Enter a binary number: 1011
Equivalent Decimal Number: 11
```

---

### ✅ **Explanation**

* For `1011`:

  ```
  (1 × 2^3) + (0 × 2^2) + (1 × 2^1) + (1 × 2^0)
  = 8 + 0 + 2 + 1 = 11
  ```

---

Would you like me to **draw the flowchart as an actual image** (ready for a report or lab submission)?

---

### ✅ How to use it:

* Copy and paste this into [**Mermaid Live Editor**](https://mermaid.live)
* Or include it in a Markdown file between triple backticks (```) with `mermaid` syntax
* It will render automatically with the correct shape types:

  * **Ovals** → Start/Stop
  * **Parallelograms** → Input/Output
  * **Rectangles** → Processing steps
  * **Diamond** → Decision

Would you like me to make a **left-to-right version (horizontal layout)** instead of top-down?


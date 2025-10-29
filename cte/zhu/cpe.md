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
    D -->|No| I[/Print decimal value (dec)/]
    I --> J([Stop])
```

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


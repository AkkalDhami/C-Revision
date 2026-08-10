# What is a Linked List?

A **Linked List** is a **linear data structure** in which elements, called **nodes**, are stored in **non-contiguous memory locations**. Each node contains two parts:

1. **Data** – Stores the actual value.
2. **Pointer (Link)** – Stores the address (reference) of the next node in the sequence.

Unlike an array, linked list elements are **not stored next to each other in memory**. Instead, each node is connected to the next node through pointers, forming a chain.

## Visualization

```text
Head
  │
  ▼
+------+------+
|  10  |   ●──┼──►
+------+------+
               │
               ▼
        +------+------+
        |  20  |   ●──┼──►
        +------+------+
                       │
                       ▼
                +------+------+
                |  30  | NULL |
                +------+------+
```

- **Head:** Pointer to the first node.
- **Node:** Contains data and a pointer to the next node.
- **NULL:** Indicates the end of the linked list.

## Key Characteristics

- Stores elements in **non-contiguous memory**.
- Each node contains **data** and a **pointer** to the next node.
- Supports **dynamic size** (can grow or shrink during runtime).
- Allows efficient **insertions and deletions** without shifting elements.
- Does **not** support direct (random) access like an array.

## Real-Life Analogy

Think of a **treasure hunt** where each clue tells you where to find the next clue. You cannot jump directly to the last clue—you must follow each clue one by one. A linked list works in the same way: each node points to the next node in the sequence.
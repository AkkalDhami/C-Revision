# Array vs Linked List

## 1. Memory Allocation
- **Array:** Elements are stored in **contiguous (continuous)** memory locations.
- **Linked List:** Elements (nodes) are stored in **non-contiguous** memory locations and connected using pointers.

---

## 2. Size
- **Array:** Size is usually fixed when created (though dynamic arrays exist, such as Python lists or C++ vectors).
- **Linked List:** Size is dynamic and can grow or shrink during runtime.

---

## 3. Access Time
- **Array:** Supports direct (random) access using an index (`arr[5]`). Time complexity: **O(1)**.
- **Linked List:** Requires sequential traversal from the head node. Time complexity: **O(n)**.

---

## 4. Insertion
- **Array:** Inserting an element (especially at the beginning or middle) requires shifting elements. Time complexity: **O(n)**.
- **Linked List:** Insertion is **O(1)** if the insertion position is already known; otherwise, finding the position takes **O(n)**.

---

## 5. Deletion
- **Array:** Deleting an element requires shifting remaining elements. Time complexity: **O(n)**.
- **Linked List:** Deletion is **O(1)** if the node is already known; otherwise, searching for it takes **O(n)**.

---

## 6. Memory Usage
- **Array:** Uses less memory because only the data is stored.
- **Linked List:** Uses more memory because each node stores both the data and one or more pointers.

---

## 7. Cache Performance
- **Array:** Better cache locality because elements are stored together in memory, making traversal faster.
- **Linked List:** Poor cache locality because nodes are scattered throughout memory.

---

## 8. Searching
- **Array:** Linear search is **O(n)**. If sorted, binary search can be used in **O(log n)**.
- **Linked List:** Searching is always **O(n)** because nodes must be visited one by one.

---

## 9. Memory Requirement
- **Array:** Requires a contiguous block of memory.
- **Linked List:** Does not require contiguous memory; nodes can be allocated anywhere.

---

## 10. Implementation Complexity
- **Array:** Simpler to implement and use.
- **Linked List:** More complex because pointers (or references) must be managed correctly.

---

## 11. Best Use Cases
- **Array:** Best when frequent indexing, random access, and read operations are needed.
- **Linked List:** Best when frequent insertions and deletions are needed.

---

## 12. Real-Life Analogy
- **Array:** Like seats in a movie theater—every seat has a fixed position, and you can directly go to seat number 25.
- **Linked List:** Like a treasure hunt—each clue leads you to the next one, so you must follow them in order.

---

## Summary

- **Use an Array** when you need fast random access and efficient memory usage.
- **Use a Linked List** when you need frequent insertions and deletions with a dynamically changing size.
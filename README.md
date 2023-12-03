# Data Structures :

## 1- Linked List

A linked list is a linear data structure consisting of nodes, where each node points to the next node in the sequence. Unlike arrays, linked lists do not have a fixed size in memory, and the elements can be scattered throughout the memory.

### Key Concepts

- **Node:** The basic building block of a linked list. Each node contains data and a reference (or pointer) to the next node in the sequence.

- **Head:** The first node in the linked list.

- **Tail:** The last node in the linked list whose next pointer is set to null, indicating the end of the list.

### Operations

- **Insertion:** Adding a new node to the list.

- **Deletion:** Removing a node from the list.

- **Traversal:** Visiting each node in the list.

### Types of Linked Lists

- **Singly Linked List:** Each node has a data field and a single next pointer.

- **Doubly Linked List:** Each node has a data field and two pointers, one pointing to the next node and another to the previous node.

- **Circular Linked List:** In this list, the last node points back to the first node, forming a loop.

Linked lists are dynamic and provide flexibility in terms of memory usage. However, accessing elements in a linked list may require traversing the list from the head. They are commonly used in situations where dynamic size and efficient insertions and deletions are important.

---

## 2- Stack

A stack is a data structure that follows the Last In, First Out (LIFO) principle. In a stack, elements are added and removed from the same end, known as the "top" of the stack.

### Key Operations

- **Push:** Adding an element to the top of the stack.

- **Pop:** Removing the element from the top of the stack.

- **Peek or Top:** Viewing the element at the top of the stack without removing it.

- **isEmpty:** Checking if the stack is empty.

Think of it like a stack of plates where you can only add or remove plates from the top. The last plate added is the first one to be removed, hence the Last In, First Out order. Stacks are used in various computer science applications, such as function call management, expression evaluation, and undo mechanisms in software.

---

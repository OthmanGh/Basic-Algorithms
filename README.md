# Data Structures :

## 1- Array

An array is a data structure that stores a collection of elements, each identified by an index or a key. The elements in an array are stored in contiguous memory locations, and their order is typically determined by their index. Arrays provide fast and direct access to elements based on their index.

## Key Characteristics of Arrays:

- **Fixed Size:** Arrays have a fixed size, meaning the number of elements they can hold is predetermined at the time of creation.

- **Homogeneous Elements:** Elements in an array are of the same data type, ensuring uniformity in storage.

- **Random Access:** Elements in an array can be accessed directly using their index, allowing for fast and constant-time access.

## Example in Pseudo-code (Python-like syntax):

```python
# Declaration and initialization of an array
myArray = [10, 20, 30, 40, 50]

# Accessing elements by index
print(myArray[2])  # Output: 30

# Modifying an element
myArray[3] = 60

# Iterating through the array
for element in myArray:
    print(element)
```

In this example, myArray is an array containing five integers. Elements can be accessed or modified using their indices. Arrays are fundamental data structures used in various programming languages to organize and manipulate data efficiently.

## 2- Linked List

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

## 3- Stack

A stack is a data structure that follows the Last In, First Out (LIFO) principle. In a stack, elements are added and removed from the same end, known as the "top" of the stack.

### Key Operations

- **Push:** Adding an element to the top of the stack.

- **Pop:** Removing the element from the top of the stack.

- **Peek or Top:** Viewing the element at the top of the stack without removing it.

- **isEmpty:** Checking if the stack is empty.

Think of it like a stack of plates where you can only add or remove plates from the top. The last plate added is the first one to be removed, hence the Last In, First Out order. Stacks are used in various computer science applications, such as function call management, expression evaluation, and undo mechanisms in software.

---

## 4- Queue

A queue is a data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are added at the rear (enqueue) and removed from the front (dequeue). The element that has been in the queue the longest is the first to be removed.

## Key Operations

- **Enqueue:** Adding an element to the rear of the queue.
- **Dequeue:** Removing the element from the front of the queue.
- **Front:** Viewing the element at the front of the queue without removing it.
- **isEmpty:** Checking if the queue is empty.

Think of it like people waiting in line; the first person to arrive is the first to leave the line. Queues are used in various computer science applications, such as process scheduling, print job management, and breadth-first search algorithms.

---

```

```

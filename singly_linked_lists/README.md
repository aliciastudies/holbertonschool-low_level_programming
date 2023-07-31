# Learning Objectives

**When and why using linked lists vs arrays**

Linked lists are dynamic data structures that use pointers to connect elements (nodes) in a linked structure. They are suitable when a collection of data that can easily grow or shrink in size during runtime. They allow efficient insertions and deletions at any position.

Arrays are best for fixed-size collections. They store elements in sequential memory locationss and offer faster random access.


**How to build and use linked lists**

1. Define a node structure containing data and a pointer to the next node.
2. Allocate memory for nodes dynamically.
3. Connect nodes together using pointers to form the linked list.
4. To add elements, allocate memory for a new node and update the next pointer of the current last node.
5. To access elements, traverse the list using next pointers.
6. To remove elements, update pointers to skip the node to be removed and free its memory.
7. To find the size, traverse the entire list while counting nodes.



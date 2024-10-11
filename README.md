# Linked List in C++

This project implements a simple **Linked List** in C++ with basic operations such as:

- Inserting a node at the beginning, at a specific position, and at the end of the list.
- Deleting a node from the list.
- Searching for a value in the list.
- Printing all values of the list.

## Table of Contents
- [Structure](#structure)
- [Operations](#operations)
- [Time Complexity](#time-complexity)
## Structure

A **linked list** is a linear data structure consisting of nodes, where each node contains a value and a pointer to the next node. The last node points to `nullptr`, indicating the end of the list.

## Operations

### Insertions:
- **At the beginning:** Adds a new node at the start of the list.
- **At a specific position:** Adds a node at a user-defined position.
- **At the end:** Adds a new node at the end of the list.

### Deletion:
- **Delete a node:** Removes a node with a specific value from the list.

### Search:
- **Search a value:** Finds whether a specific value exists in the list.

### Printing:
- **Print all nodes:** Outputs all the values of the list.

## Time Complexity

- **Insert at beginning:** O(1)
- **Insert at end:** O(n)
- **Insert at position:** O(n)
- **Delete a node:** O(n)
- **Search for a value:** O(n)

# Linked List

## Types of Linked List

- singly linked list
  - elements are linked by a single pointer.
  - allows the list to be traversed from its first element to its last.
- doubly linked list
  - elements are linked by two pointers.
  - allows the list to be traversed both forward and backward.
- circular linked list
  - last element is linked to the first element instead of being set to NULL.

# Description

take singly linked list for example, which composed of individual elements, each linked by a single pointer.

each element consists of two parts:
- data member
- pointer (`next` pointer)

a linked list is formed by setting the `next` pointer of each element to point to the element that follows it.

the `next` pointer of the last element is set to NULL to indicate the end of the list.

the element at the start of the list is its `head`, the element at the end of the list is its `tail`.

keep in mind that the elements are allocated dynamically, they are usually scattered about in memory.

special care is required when it comes to maintaining the links.

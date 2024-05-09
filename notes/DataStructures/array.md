# Array

array is a collection of items stored at contiguous memory locations.

the idea is to store multiple items of the same type together, making it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted as the base address of the array).

this makes arrays a highly efficient data structure for accessing elements, as you can access any item by its index.

## Characteristics

- fixed size: once an array is declared, its size is fixed and cannot be altered. you must know the maximum number of elements you will store in it ahead of time.
- homogeneous: an array can store only one type of data.
- contiguous memory allocation: elements are stored at contiguous memory locations.

## Operations

- traversal: visiting each element of the array at least once.
- insertion: adding an element at a given position in the array. this can be complex as it requires shifting elements to make room for the new element.
- deletion: removing an element from a given position in the array. this can be complex as it requires shifting elements to fill the gap left by the deleted element.
- search: finding the location of an element in the array.
- update: changing the value of an existing element at a given position.

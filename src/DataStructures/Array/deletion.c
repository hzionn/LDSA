#include <stdio.h>

#define SIZE 5

// a helper function to print the array
void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// shift elements in the array to the left
// so that we can delete the element at the given index
void shift_elements_left(int arr[], int index, int size) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

// delete element at given index
void delete_by_index(int arr[], int size, int index) {
    if (index >= 0 && index < size) {
        shift_elements_left(arr, index, size);
    } else {
        printf("deletion failed");
    }
}

int main() {
    int myarray[SIZE] = {1, 2, 3, 4, 5};
    int array_size = sizeof(myarray) / sizeof(myarray[0]);
    print_array(myarray, array_size);
    delete_by_index(myarray, array_size, 2);
    array_size--;
    print_array(myarray, array_size);
}

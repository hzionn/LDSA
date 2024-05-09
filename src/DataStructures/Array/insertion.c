#include <stdio.h>

const int SIZE = 5;

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void shift_elements_right(int arr[], int index, int size) {
  for (int i = size; i > index ; i--) {
    arr[i] = arr[i - 1];
  }
}

// move all elements to the right starting from the given index
// so that we can insert the element at the given index
void insert_at_index(int arr[], int size, int index, int value) {
  if (index >= 0 && index < size) {
    shift_elements_right(arr, index, size);
    arr[index] = value;
  } else {
    printf("insertion failed");
  }
}

int main() {
    int myarray[SIZE] = {1, 2, 3, 4, 5};
    int array_size = sizeof(myarray) / sizeof(myarray[0]);
    print_array(myarray, array_size);
    insert_at_index(myarray, array_size, 2, 10);
    array_size++;
    print_array(myarray, array_size);
}

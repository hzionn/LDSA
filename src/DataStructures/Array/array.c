#include <stdio.h>

int main() {

  // initialize array with size 5
  // we wish to store 5 integers
  int arr[5] = {1, 2, 3, 4, 5};

  // print the first element of the array
  printf("the first element of the array is %d\n", arr[0]);
  // print the second element of the array
  printf("the second element of the array is %d\n", arr[1]);

  // get the first n elements of the array
  int n = 3;
  for (int i = 0; i < n; i++) {
    printf("the %d element of the array is %d\n", i, arr[i]);
  }
 
  // get the size of the array
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("the size of the array is %d\n", size);

  return 0;
}

#include <stdio.h>

int main() {


  int nums[] = {3,1,5,4,2};
  int length = sizeof(nums)/sizeof(nums[0]);
  int gap = length/2;
  int withEx;
  int temp;


  // Print the values of unsorted array
  printf("Unsorted Array: ");
  for (int i = 0; i < length; i++) {
    printf("%d", nums[i]);
    if (i != length-1) {
      printf(",");
    }
  }
  printf("\n");

  // Shell Sorting
  while (gap != 0) {
    withEx = 1;

    while (withEx) {
      withEx = 0;
      for (int i = 0; i < length-gap; i++) {
        if (nums[i] > nums[i+gap]) {
          temp = nums[i];
          nums[i] = nums[i+gap];
          nums[i+gap] = temp;
          withEx = 1;
        }
      }
    }
    gap /= 2;
  }

  // Print the values of sorted array
  printf("Sorted Array: ");
  for (int i = 0; i < length; i++) {
    printf("%d", nums[i]);
    if (i != length-1) {
      printf(",");
    }
  }
  printf("\n");



  return 0;
}
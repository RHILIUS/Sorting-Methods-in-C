#include <stdio.h>

int main () {

  int nums[] = {3,1,5,4,2,3,5,3,5,6};
  int length = sizeof(nums)/sizeof(nums[0]);
  int withEx = 1;
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

  // Bubble Sorting
  while (withEx) {
    withEx = 0;
    for (int i = 0; i < length-1; i++) {
      if (nums[i] > nums[i+1]) {
        temp = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = temp;
        withEx = 1;
      }
    }
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
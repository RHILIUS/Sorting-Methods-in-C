#include <stdio.h>

int main () {

  int nums[] = {3,1,5,4,2};
  int length = sizeof(nums)/sizeof(nums[0]);
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

  // Balloon Sorting
  for (int i = 0; i < length-1; i++) {
    for (int j = i+1; j < length; j++) {
      if (nums[i] > nums[j]) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
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
#include<stdio.h>

void swap_elements(int *arr, int pos1, int pos2);
int main(void)
{
  int arb[100], swap, swbp, max_sized_input, i;

  printf("Enter the number of elements (max 100): ");
   scanf("%d", &max_sized_input);

  printf("Enter %d numbers: ", max_sized_input);
   for(i=0; i<max_sized_input; i++)
     scanf("%d", &arb[i]);
  
  printf("Enter first position to swap (0-%d): ", max_sized_input-1);
   scanf("%d", &swap);
  printf("Enter second position to swap (0-%d): ", max_sized_input-1);
   scanf("%d", &swbp);
  swap_elements( arb ,swap, swbp);

  printf("After swapping element %d and %d\n", swap+1, swbp+1);
  for(i=0; i<max_sized_input; i++)
  {
    printf("%d ", arb[i]);
  }
  
   
  return 0;
}

void swap_elements (int *arr, int pos1, int pos2)
{
 int temp;
  
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = temp;
}
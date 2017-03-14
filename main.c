/* Bubble sort code */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ELEMENTS 10

int main()
{
  int array[NUM_ELEMENTS], c, d, swap;

  srand(time(NULL));

  for (c = 0; c < NUM_ELEMENTS; c++)
  {
    array[c] = rand();
  }

  for (c = 0; c < (NUM_ELEMENTS - 1); c++)
  {
    for (d = 0; d < NUM_ELEMENTS - c - 1; d++)
    {
      if (array[d] > array[d + 1]) /* For decreasing order use < */
      {
        swap = array[d];
        array[d] = array[d + 1];
        array[d + 1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < NUM_ELEMENTS; c++)
  {
    printf("%d\n", array[c]);
  }

  return 0;
}

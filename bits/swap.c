#include <stdio.h>
int main()
{
  int x = 10, y = 5;
 
  printf("Before Swapping: x = %d, y = %d\n", x, y);
  // Code to swap 'x' (1010) and 'y' (0101)
  x = x ^ y;  // x now becomes 15 (1111)
  y = x ^ y;  // y becomes 10 (1010)
  x = x ^ y;  // x becomes 5 (0101)
 
  printf("After Swapping: x = %d, y = %d\n", x, y);
 
  return 0;
}

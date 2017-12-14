#include<stdio.h>
 
/* unsets the rightmost set bit of n and returns the result */
int fun(unsigned int n)
{
  return n&(n-1);
}    
 
/* Driver program to test above function */
int main()
{
  int n = 7;
  printf("The number %d after unsetting the rightmost set bit= %d\n",n, fun(n));
 
  return 0;
}

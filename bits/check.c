#include <stdlib.h>
#include <stdio.h>
int main()
{
    unsigned int a, b, c;
    a = rand();
    b = rand();
  printf("a=%d\ta=%d\n",a,b);
    c = a + b;
  printf("c=%d\n",c);
    if( c < a || c < b)
    {
        printf("correct\n");
    }
     else
    {
        printf("error\n");
    }
}

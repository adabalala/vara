#include <stdio.h>
int multiplyWith3Point5(int x)
{
  return ((x<<3) + x)>>1;
} 

int main()
{
  int x = 4; 
  printf("%d*4.5=%d\n",x, multiplyWith3Point5(x));
 printf("4*2=%d\n",4<<1);
 printf("4*4=%d\n",4<<2);
 printf("4*5=%d\n",((4<<2)+4));
 printf("4*9=%d\n",((4<<3)+4));
 printf("4*4.5=%d\n",((4<<3)+4)>>1);
 printf("4/2=%d\n",4>>1);
 printf("4/4=%d\n",4>>2);
 printf("4/8=%d\n",4>>3);
 printf("8/8=%d\n",8>>3);
  return 0;
}

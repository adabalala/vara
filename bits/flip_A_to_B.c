#include <stdio.h>
int count(int data)
{
int count=0;
while(data)
{
data=data&(data-1);
count ++;
}
return count;
}
int main(void)
{
int a,b;
printf("enter data a and b\n");
scanf("%d%d",&a,&b);
printf("no of setbits=%d\n",count(a^b));
}


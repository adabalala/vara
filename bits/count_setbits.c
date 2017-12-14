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
int data;
printf("enter data to cunt set bits\n");
scanf("%d",&data);
printf("no of setbits=%d\n",count(data));
}

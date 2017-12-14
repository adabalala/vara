#include <stdio.h>

void add_one(int n)
{
	int m=1;
	while(n&m)
	{
		n=n^m;
		m<<=1;
	}
	n=n^m;
	printf("after add one to num=%d\n",n);
}
void add_one1(int n)
{
n=~n;
printf("~n=0x%x\n",n);
n=-n;
printf("-(~n)=0x%x\n",n);
} 

int main(void)
{
	int number;
	printf("enter number\n");
	scanf("%d",&number);
	add_one(number);
	add_one1(number);
}

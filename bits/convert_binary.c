#include <stdio.h>
void bin(int number)
{
	int i;
	for(i=31;i>=0;i--)
	{        
		if((number>>i)&1)
			putchar('1');
		else
			putchar('0');
	}
printf("\n");
}
void bin1(int number)
{
int size=8*sizeof(number)-1;
} 
int main(void)
{
	int number;
	printf("enter number to convert to binary\n");
	scanf("%d",&number);
	bin(number);
	return 0;
}

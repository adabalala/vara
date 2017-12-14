#include <stdio.h>

int multiply_seven(int data)
{
	return ((data<<3) -data);
}

int multiply_nine(int data)
{
	return ((data<<3) +data);
}

int divide_five(int data)
{
	return ((data>>2));
}
int main(void)
{
	int number;
	printf("enter number\n");
	scanf("%d",&number);
	printf("%d*7 is =%d\n",number,multiply_seven(number));
	printf("%d*9 is =%d\n",number,multiply_nine(number));
	printf("%d*9 is =%d\n",number,divide_five(number));
	return 0;
}

#include <stdio.h>

void check(int a,int b)
{
	if(a^b)
		printf("numbers ae not same\n");
	else
		printf("numbers are same\n");
}

int main(void)
{
	int a,b;
	printf("enter number a and b\n");
	scanf("%d%d",&a,&b);
	check(a,b);
	return 0;
}

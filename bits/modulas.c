#include<stdio.h>

/* This function will return n % d.d must be one of: 1, 2, 4, 8, 16, 32, … */
unsigned int getModulo(unsigned int n, unsigned int d)
{
	return ( n & (d-1) );
}         

/* Driver program to test above function */
int main()
{
	unsigned int n;
	unsigned int d; /*d must be a power of 2*/
	printf("enter the values\n");
	scanf("%d%d",&n,&d);
	printf("%u moduo %u is %u\n", n, d, getModulo(n, d));

	return 0;
}

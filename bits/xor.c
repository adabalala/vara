#include <stdio.h>
#include <stdbool.h>
int myXOR(int x, int y)
{
	int res = 0,i; // Initialize result

	// Assuming 32-bit Integer 
	for (i = 31; i >= 0; i--)                     
	{
		// Find current bits in x and y
		bool b1 = x & (1 << i);
		bool b2 = y & (1 << i);

		// If both are 1 then 0 else xor is same as OR
		bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);          

		// Update result
		res <<= 1;
		res |= xoredBit;
	}
	return res;
}

int myXOR1(int x, int y)
{
   return (x | y) & (~x | ~y);
}
int main(void)
{
	int a,b;
	printf("enter numbers\n");
	scanf("%d%d",&a,&b);
	printf("%d^%d=%d\n",a,b,myXOR(a,b));
	printf("%d^%d=%d\n",a,b,myXOR1(a,b));
	return 0;
}

#include <stdio.h>
int poweroftwo(int n)
{
    return n && !(n&(n-1));
}

int findposition(unsigned n)
{
    if (!poweroftwo(n))
        return -1;
 
    unsigned i = 1, pos = 1;
 
    // Iterate through bits of n till we find a set bit
    // i&n will be non-zero only when 'i' and 'n' have a set bit
    // at same position
    while (!(i & n))
    {
        // Unset current bit and set the next bit in 'i'
        i = i << 1;
 
        // increment position
        ++pos;
    }
 
    return pos;
}
int main() {
    int number;
    printf("enter number\n");
    scanf("%d",&number);
   printf("position of set bit %d\n",findposition(number)); 
	//code
	return 0;
}

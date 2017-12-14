#include<stdbool.h>
#include<stdio.h>

bool oppositeSigns(int x, int y)
{
       printf("%d\n",(x^y) );
	return ((x ^ y) < 0);
}
bool oppositeSigns1(int x, int y)
{
    return (x < 0)? (y >= 0): (y < 0);
}
int main()
{
	int x = 100, y = -1;
	if (oppositeSigns(x, y) == true)
		printf ("Signs are opposite\n");
	else
		printf ("Signs are not opposite\n");
	if (oppositeSigns1(x, y) == true)
		printf ("Signs are opposite\n");
	else
		printf ("Signs are not opposite\n");
	return 0;
}

#include <stdio.h>

void set_particular_bit(int number,int pos)
{
	if(number<=0)
	{
		printf("number should be greater than 0\n");
		return;
	}
	else if((number&(1<<pos)))
	{
		printf("this position already set\n");
	}
	else
		printf("after %d setting data=%d\n",pos,(number|(1<<pos)));
} 

void off_particular_bit(int number,int pos)
{
	if(number<=0)
	{
		printf("number should be greater than 0\n");
		return;
	}
	if((number&(1<<pos)))
	{
		printf("after %d turnoff data=%d\n",pos,(number&~(1<<pos)));
	}
	else
		printf("this position already clear\n");
} 

int main(void)
{
	int number,pos;

	printf("enter data and position to set\n");
	scanf("%d%d",&number,&pos);

	set_particular_bit(number,pos);
	off_particular_bit(number,pos);
	return 0;
}

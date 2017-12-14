#include <stdio.h>
int convert(int data)
{
	return (((data&0x000000ff)>>0)<<24| ((data&0x0000ff00)>>8) <<16 | ((data&0x00ff0000)>>16) <<8 | ((data&0xff000000)>>24) << 0); 
}

int main(void)
{
	int data=0xAABBCCDD;
	char *endian;
	endian=(char*)&data;
	if(*endian)
		printf("system is little endian\n");
	else
		printf("system is big endian\n");
	printf("0x%x\n",convert(data));
	printf("0x%x\n",convert(0xaabb));
}

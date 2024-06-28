#include <stdio.h>
#define DARASIZE 4
#define BITSIZE 16

void disp_bit(unsigned short bit)
{
	int i;
	unsigned short musk = 0x8000;
	for (i = 0; i < BITSIZE; i++)
	{
		if ((bit & musk) != 0)
			printf("1");
		else
			printf("0");
		musk = musk >> 1;
	}
	printf(" ");
}
void rotate_left(unsigned short bits[], int n)
{
	unsigned short work, over, over_top;
	int i;
	over_top = bits[0] >> (BITSIZE - n);
	for (i = 0; i < DARASIZE - 1; i++)
	{
		work = bits[i] << n;
		over = bits[i + 1] >> (BITSIZE - n);
		bits[i] = work | over;
	}
	work = bits[DARASIZE - 1] << n;
	bits[DARASIZE - 1] = work | over_top;
}
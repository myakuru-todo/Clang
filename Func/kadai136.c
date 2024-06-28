#include <stdio.h>

int unti(int x, int y);

main()
{
	int a, b,kotae;
	
	printf("2‚Â‚Ì®”?");
	scanf("%d%d", &a, &b);

	kotae = unti(a, b);
	printf("max = %d",kotae);
}
int unti(int x, int y)
{
	int c;
	c = 0;
	if (x < y) 
	{
		c = y;
			
	}
	else {
		c = x;
	}
	
	return c;
}

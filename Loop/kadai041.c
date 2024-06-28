#include<stdio.h>

main() 
{
	int a,cun=0,goukei=0;
	while (1)
	{
		printf("®”(-999‚ÅI—¹)");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		goukei += a;
		cun++;
	}
	printf("‡Œv = %d", goukei);
	printf("•½‹Ï = %.2f", (float)goukei / cun);

}
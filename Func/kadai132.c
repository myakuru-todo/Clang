#include <stdio.h>

main()
{
	int goukei=0,heikin=0,ret,suuti,cun=0;
	printf("®”");
	ret = scanf("%d", &suuti);

	while (ret != EOF)
	{
		goukei += suuti;
		cun++;
		printf("®”");
		ret = scanf("%d", &suuti);

	}
	printf("‡Œv= %d", goukei);
	printf("•½‹Ï= %.1f", (float)goukei / cun);
}
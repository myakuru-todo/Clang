#include<stdio.h>

main() 
{
	int a,cun=0,goukei=0;
	while (1)
	{
		printf("����(-999�ŏI��)");
		scanf("%d", &a);
		if (a == -999)
		{
			break;
		}
		goukei += a;
		cun++;
	}
	printf("���v = %d", goukei);
	printf("���� = %.2f", (float)goukei / cun);

}
#include <stdio.h>

main()
{
	int a[11] =
	{ 10,20,30,40,50,60,70,80,90,100 };
	int b[11] =
	{ 100,200,300,400,500,600,700,800,900,1000 };
	int i;
	printf("”z—ña");
	for (i = 0; i < 10; i++) {
		printf(" %d ", a[i]);
	}
	printf("\n");
	printf("”z—ñb");
	for (i = 0; i < 10; i++) {
		printf(" %d ", b[i]);
	}
	printf("\n");
	printf("”z—ñc");
	a[i] += b[i];
	for (i = 0; i < 10; i++) {
		printf(" %d ", a[i]+b[i]);
	
	}

}
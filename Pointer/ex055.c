#include <stdio.h>

main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa, asum,i;
	float* pd, bsum;

	pa = a;
	pd = b;
	asum = 0;
	bsum = 0;
	

	for (i = 0; i < 6; i++) {
		asum += *pa;
		pa++;
	 
	}

	printf("�z��a ���v = %d\t", asum);
	printf("���� = %.3f",(float) asum / 6);

	for (i = 0; i < 4; i++) {
		bsum += *pd;
		pd++;
	}
	printf("\n�z��b ���v = %.3f\t", bsum);
	printf("���� = %.3f", bsum / 4);
}
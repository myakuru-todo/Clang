#include <stdio.h>

main()
{
	int a = 100, b = 200,w;
	int* pa, * pb;

	pa = &a;
	pb = &b;


	printf("実行前a=%d  b=%d\n", a,b);
	w = *pa;
	*pa = *pb;
	*pb = w;

	printf("実行後a=%d  b=%d",a,b);
}
#include <stdio.h>

main()
{
	int a = 50, b = 10;
	int* pa, * pb;

	pa = &a;
	pb = &b;
	printf("%d+%d=%d",a,b, *pa + *pb);
}
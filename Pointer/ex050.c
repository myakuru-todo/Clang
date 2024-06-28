#include <stdio.h>

main()
{
	int a = 100;
	int* pa;

	pa = &a;
	printf("a=%d &a=%d\n", a, &a);
	printf("pa=%d *pa=%d &pa = %d\n", pa, *pa, &pa);

}
#include <stdio.h>

main()
{
	int a = 100, b = 200;
	int* pa, * pb,*w;

	pa = &a;
	pb = &b;


	printf("実行前*pa=%d  *pb=%d\n",*pa,*pb);
	w = pa;
	pa = pb;
	pa = w;

	printf("実行後*pa=%d  *pb=%d", *pa,*pb);
}
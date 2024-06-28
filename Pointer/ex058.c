#include <stdio.h>

main()
{
	int a[3], * p,i;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	for (i = 0; i < 3; i++) {
		printf(" %d ", (*p)++);
	}
}
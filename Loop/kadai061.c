#include <stdio.h>

main()
{
	int a=1;
	do
	{ 
		printf("%d ", a);
		if (a % 10== 0) {
			printf("\n");
		}
		a++;

	} while (a<=20);
}
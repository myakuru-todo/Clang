#include <stdio.h>

main()
{
	int a,b;
	printf("かずは？");
	scanf("%d", &a);
	
	do {
		b = 0;//初期値はここにもってこないとだめ
		do {
			printf("*");
			b++;

		} while (b< 5);
		printf("\n");
		a--;
	} while (a > 0);
}
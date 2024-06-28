#include<stdio.h>

main()
{
	int a;
	printf("整数?");
	scanf("%d", &a);
	if (a < 0) {
		printf("マイナスです");
	}
	if (a > 0) {
		printf("プラスです");
	}
	if (a == 0) {
		printf("0です");
	}

}
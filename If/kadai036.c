#include<stdio.h>

main()
{
	int a, b;
	printf("整数1");
	scanf("%d", &a);
	printf("整数2");
	scanf("%d", &b);
	if (a > b)
	{
		printf("%dより%dのほうが%d小さい", a, b, b - a);
	}
	if (a < b)
	{
		printf("%dより%dのほうが%d大きい", a, b, b - a);
	}
	if (a == b) {
		printf("%dと%dは等しい", a, b);
	}
}
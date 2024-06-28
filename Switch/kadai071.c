#include <stdio.h>

main()
{
	int a, b;
	char en;
	printf("®”1:");
	scanf("%d", &a);
	printf("®”2:");
	scanf("%d", &b);
	printf("‰‰Z‚µ");
	scanf("%s", &en);
	switch (en)
	{
	case '+': printf("%d+%d=%d", a, b, a + b);
		break;
	case '-': printf("%d-%d=%d", a, b, a - b);
		break;
	case '*': printf("%d*%d=%d", a, b, a * b);
		break;
	case '/': printf("%d/%d=%d", a, b, a / b);
		break;



	default:
		break;
	}
}
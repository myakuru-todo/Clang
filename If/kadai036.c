#include<stdio.h>

main()
{
	int a, b;
	printf("����1");
	scanf("%d", &a);
	printf("����2");
	scanf("%d", &b);
	if (a > b)
	{
		printf("%d���%d�̂ق���%d������", a, b, b - a);
	}
	if (a < b)
	{
		printf("%d���%d�̂ق���%d�傫��", a, b, b - a);
	}
	if (a == b) {
		printf("%d��%d�͓�����", a, b);
	}
}
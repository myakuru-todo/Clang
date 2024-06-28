#include<stdio.h>

main()
{
	int a, b;
	printf("®”1");
	scanf("%d", &a);
	printf("®”2");
	scanf("%d", &b);
	if (a > b)
	{
		printf("%d‚æ‚è%d‚Ì‚Ù‚¤‚ª%d¬‚³‚¢", a, b, b - a);
	}
	if (a < b)
	{
		printf("%d‚æ‚è%d‚Ì‚Ù‚¤‚ª%d‘å‚«‚¢", a, b, b - a);
	}
	if (a == b) {
		printf("%d‚Æ%d‚Í“™‚µ‚¢", a, b);
	}
}
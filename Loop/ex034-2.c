#include <stdio.h>

main()
{
	int a,b;
	printf("‚©‚¸‚ÍH");
	scanf("%d", &a);
	
	do {
		b = 0;//‰Šú’l‚Í‚±‚±‚É‚à‚Á‚Ä‚±‚È‚¢‚Æ‚¾‚ß
		do {
			printf("*");
			b++;

		} while (b< 5);
		printf("\n");
		a--;
	} while (a > 0);
}
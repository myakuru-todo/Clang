#include<stdio.h>

main()
{
	char a;
	printf("アルファベット?");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		printf("小文字です");
	}
	else {
		printf("それ以外");
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, n, k[10];
	char s[10];
	srand(time(0));

	printf("入力");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) 
	{
		//乱数を求める
		k[i] = rand() % 6;
		//暗号化プログラム
		s[i] = s[i] + k[i];
	}
	printf("暗号化文字列>%s\n", s);
	printf("暗号化keyは>");
	
	for (n = 0; n < i; n++) {
		printf("%d",k[n]);
	}
}
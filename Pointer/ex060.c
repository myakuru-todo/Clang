#include <stdio.h>

main()
{
	char data[15] = "Language";
	char* p,ch;
	int i=0;
	p = data;
	printf("data[]=%s\n", p);
	printf("検索文字は?");
	scanf("%c", &ch);
	printf("検索結果は");
	while (*(p + i)) {
		if (ch == *(p + i)) {

			printf(" %d ", i+1);
		}
		i++;
	}
	printf("文字目です");
}
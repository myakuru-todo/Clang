#include <stdio.h>

main()
{
	char s[19];
	int i;

	printf("モジレツを入力してください");
	scanf("%s", &s);

	for (i=0;s[i] != '\0';i++) 
	{
		s[i] = s[i] + 1;
		
	}
	printf("暗号化文字列%sを表示", s);
}
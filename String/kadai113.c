#include<stdio.h>

main()
{
	char data[] = "GameSoft";
	int i;
	for (i = 0; data[i] != '\0';i++) {}
	printf("文字列 = %s\n", data);
	printf("文字数 = %d文字", i);
}
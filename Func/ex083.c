#include <stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("モジレツ？:");
	gets(buf);
	mojisu = strcnt(buf);
	printf("入力された文字列の文字数は%dです。\n",mojisu);

}
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
		return(cnt);
	
}
#include <stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("���W���c�H:");
	gets(buf);
	mojisu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�ł��B\n",mojisu);

}
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
		return(cnt);
	
}
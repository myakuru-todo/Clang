#include <stdio.h>

main()
{
	char data[15] = "Language";
	char* p,ch;
	int i=0;
	p = data;
	printf("data[]=%s\n", p);
	printf("����������?");
	scanf("%c", &ch);
	printf("�������ʂ�");
	while (*(p + i)) {
		if (ch == *(p + i)) {

			printf(" %d ", i+1);
		}
		i++;
	}
	printf("�����ڂł�");
}
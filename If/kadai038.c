#include<stdio.h>

main()
{
	char a;
	printf("1��������");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		printf("�ϊ����ʂ�%c", a - 32);
	}
	if (a >= 'A' && a <= 'Z') {
		printf("�ϊ����ʂ�%c", a + 32);
	}
}
#include <stdio.h>

main()
{
	int a,b;
	printf("�����́H");
	scanf("%d", &a);
	
	do {
		b = 0;//�����l�͂����ɂ����Ă��Ȃ��Ƃ���
		do {
			printf("*");
			b++;

		} while (b< 5);
		printf("\n");
		a--;
	} while (a > 0);
}
#include <stdio.h>

main()
{
	char moji;
	printf("���Z�q�����");
	scanf("%c", &moji);

	switch (moji)
	{
	case '/':  printf( "���Z�ł�");
		break;
	case '*':  printf("��Z�ł�");
		break;
	case '+':  printf("���Z�ł�");
		break;
	case '-': printf("���Z�ł�");
		break;

	default:
		break;
	}
}
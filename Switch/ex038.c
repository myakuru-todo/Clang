#include <stdio.h>

main()
{
	int a;
	printf("��������� :");
	scanf("%d", &a);

	switch (a/10)
	{
	case 1: printf("�P�O�_��ł�");
		break;
	case 2: printf("20�_��ł�");
		break;
	case 3: printf("30�_��ł�");
		break;
	case 4: printf("40�_��ł�");
		break;
	case 5: printf("50�_��ł�");
			break;


	default:
		break;
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a, b;
	printf("�ŏ��̓O�[����񂯂�");
	scanf("%d", &a);
	switch (a)
	{
	case 1:printf("\n�Ղꂢ��[�͂��[�ł�.\n");
		break;
	case 2:printf("\n�v���C���[�̓`���L�ł�\n");
		break;
	case 3:printf("\n�v���C���[�̓p�[�ł�\n");
		break;
	}
	b = rand() % 3;
	switch (b)
	{
	case 0:printf("\npc�͂��[�ł�\n");
		break;
	case 1:printf("\npc�̓`���L�ł�\n");
		break;
	case 2:printf("\npc�̓p�[�ł�\n");
		break;
	}
	switch (((a-1)-b+3)%3)
	{
	case 0:printf("\n������\n");
		break;
	case 1:printf("\npc�쏟��\n");
		break;
	case 2:printf("\n�v���C���[�̏���\n");
		break;
	}

}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a, b;
	printf("最初はグーじゃんけん");
	scanf("%d", &a);
	switch (a)
	{
	case 1:printf("\nぷれいやーはぐーです.\n");
		break;
	case 2:printf("\nプレイヤーはチョキです\n");
		break;
	case 3:printf("\nプレイヤーはパーです\n");
		break;
	}
	b = rand() % 3;
	switch (b)
	{
	case 0:printf("\npcはぐーです\n");
		break;
	case 1:printf("\npcはチョキです\n");
		break;
	case 2:printf("\npcはパーです\n");
		break;
	}
	switch (((a-1)-b+3)%3)
	{
	case 0:printf("\nあいこ\n");
		break;
	case 1:printf("\npc野勝ち\n");
		break;
	case 2:printf("\nプレイヤーの勝ち\n");
		break;
	}

}
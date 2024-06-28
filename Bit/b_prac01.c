#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	enum bitstate
	{
		Base = 0,       //��
	    Poizon = 1<<0,  //���
		Sleep=1<<1,
		Paralysis=1<<2,
		burn=1<<3,
		AtkUp=1<<4,
		AtkDown=1<<5
	 
	};
	typedef unsigned int UINT;
	typedef struct
	{
		char name[20];
		int hp;
		int mp;
		int atk;
		int def;
		UINT Mystate;
	}Chara;
	typedef struct
	{
		char name[20];
		int hp;
		int atk;
		int def;
		UINT state;
	}Mob;
	
	void DisplayStatus(UINT s);
	void ChangeFlag(UINT* s);
	void ClearFlag(UINT* s);
	int DisplayMenu(void);
	main()
	{//                   name     hp  mp stk def Mystate
		Chara chara = { "��l��",2000,200,100,50,Base };
		Mob mob[3] = { 
			//name      hp  stk def  state
			{"�X���C��",100,50,20,Base},
			{"���񂿂܂�",1000,200,40,Base},
			{"���X�{�X",5000,500,100,Base} };
		srand(time(0));
	}

	int DisplayMenu(void)
	{
		char ch;
		printf("�R�}���h\n");
		printf("1:��������\n 2:�ڂ�����\n");
		ch = getch();
	}



	void DisplayStatus(UINT s)
	{
		printf("****���݂̏��****\n");
		if (s & Poizon)
		{
			printf("��\n");
		}
		if (s & Sleep)
		{
			printf("����\n");
		}
		if (s & Paralysis)
		{
			printf("���\n");
		}
		if (s & burn)
		{
			printf("�₯��\n");
		}
		if (s & AtkUp)
		{
			printf("�U���̓A�b�v\n");
		}
		if (s & AtkDown)
		{
			printf("�U���̓_�E��\n");
		}
		printf("********************\n");
	}
	void ChangeFlag(UINT* s)
	{
		int a;
		while (1)
		{
			DisplayStatus(*s);
			printf("�ǂ̏�Ԃɂ��܂����H");
			printf("1:�� 2:���� 3:��� 4:�Ώ� 5;�U��up 6:�U��dwun 0:���͏I��>");
			scanf("%d", &a);
			if (a == 0) { break; }



			switch (a)
			{

			case 1:
				*s |= Poizon;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= burn;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
			default:
				break;
			}
		}
	}
	void ClearFlag(UINT* s)
	{
		int a;
		while (1)
		{
			DisplayStatus(*s);
			printf("�ǂ̏�Ԃɂ��܂����H");
			printf("1:�� 2:���� 3:��� 4:�Ώ� 5;�U��up 6:�U��dwun 0:���͏I��>");
			scanf("%d", &a);
			if (a == 0) { break; }

			switch (a)
			{
			case 1:
				*s &= ~Poizon;
				break;
			case 2:
				*s &= ~Sleep;
				break;
			case 3:
				*s &= ~Paralysis;
				break;
			case 4:
				*s &= ~burn;
				break;
			case 5:
				*s &= ~AtkUp;
				break;
			case 6:
				*s &= ~AtkDown;
				break;
			case 7:
				*s = Base;
			default:
				break;
			}

		}

	}
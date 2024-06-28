#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	enum bitstate
	{
		Base = 0,       //毒
	    Poizon = 1<<0,  //麻痺
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
		Chara chara = { "主人公",2000,200,100,50,Base };
		Mob mob[3] = { 
			//name      hp  stk def  state
			{"スライム",100,50,20,Base},
			{"うんちまん",1000,200,40,Base},
			{"ラスボス",5000,500,100,Base} };
		srand(time(0));
	}

	int DisplayMenu(void)
	{
		char ch;
		printf("コマンド\n");
		printf("1:たたかう\n 2:ぼうぎょ\n");
		ch = getch();
	}



	void DisplayStatus(UINT s)
	{
		printf("****現在の状態****\n");
		if (s & Poizon)
		{
			printf("毒\n");
		}
		if (s & Sleep)
		{
			printf("睡眠\n");
		}
		if (s & Paralysis)
		{
			printf("麻痺\n");
		}
		if (s & burn)
		{
			printf("やけど\n");
		}
		if (s & AtkUp)
		{
			printf("攻撃力アップ\n");
		}
		if (s & AtkDown)
		{
			printf("攻撃力ダウン\n");
		}
		printf("********************\n");
	}
	void ChangeFlag(UINT* s)
	{
		int a;
		while (1)
		{
			DisplayStatus(*s);
			printf("どの状態にしますか？");
			printf("1:毒 2:睡眠 3:麻痺 4:火傷 5;攻撃up 6:攻撃dwun 0:入力終了>");
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
			printf("どの状態にしますか？");
			printf("1:毒 2:睡眠 3:麻痺 4:火傷 5;攻撃up 6:攻撃dwun 0:入力終了>");
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
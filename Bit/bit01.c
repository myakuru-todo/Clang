#include<stdio.h>


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
	void DisplayStatus(UINT s);
	void ChangeFlag(UINT* s);
	void ClearFlag(UINT* s);
	main()
	{
		//状態を管理する変数
		UINT MyState = Base;

		ChangeFlag(&MyState);

		//DisplayStatus(MyState);

		ClearFlag(&MyState);
		
		
		//DisplayStatus(MyState);
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
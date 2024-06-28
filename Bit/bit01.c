#include<stdio.h>


	enum bitstate
	{
		Base = 0,       //“Å
	    Poizon = 1<<0,  //–ƒáƒ
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
		//ó‘Ô‚ðŠÇ—‚·‚é•Ï”
		UINT MyState = Base;

		ChangeFlag(&MyState);

		//DisplayStatus(MyState);

		ClearFlag(&MyState);
		
		
		//DisplayStatus(MyState);
	}
	void DisplayStatus(UINT s)
	{
		printf("****Œ»Ý‚Ìó‘Ô****\n");
		if (s & Poizon)
		{
			printf("“Å\n");
		}
		if (s & Sleep)
		{
			printf("‡–°\n");
		}
		if (s & Paralysis)
		{
			printf("–ƒáƒ\n");
		}
		if (s & burn)
		{
			printf("‚â‚¯‚Ç\n");
		}
		if (s & AtkUp)
		{
			printf("UŒ‚—ÍƒAƒbƒv\n");
		}
		if (s & AtkDown)
		{
			printf("UŒ‚—Íƒ_ƒEƒ“\n");
		}
		printf("********************\n");
	}
	void ChangeFlag(UINT* s)
	{
		int a;
		while (1)
		{
			DisplayStatus(*s);
			printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H");
			printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5;UŒ‚up 6:UŒ‚dwun 0:“ü—ÍI—¹>");
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
			printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H");
			printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5;UŒ‚up 6:UŒ‚dwun 0:“ü—ÍI—¹>");
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
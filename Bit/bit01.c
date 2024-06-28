#include<stdio.h>


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
	void DisplayStatus(UINT s);
	void ChangeFlag(UINT* s);
	void ClearFlag(UINT* s);
	main()
	{
		//��Ԃ��Ǘ�����ϐ�
		UINT MyState = Base;

		ChangeFlag(&MyState);

		//DisplayStatus(MyState);

		ClearFlag(&MyState);
		
		
		//DisplayStatus(MyState);
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
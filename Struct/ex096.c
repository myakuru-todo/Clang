//ex096.c
//�A�h���X�n��
#include <stdio.h>
#include <string.h>
 // 

struct syohindata {
	char name[20];
	int tanka;
};
void display1(int a);
void dispaly2(struct syohindata syohin);
void display3(struct syohindata *p);

main()
{
	int a = 10;
	struct syohindata syohin = { "��������",50 };
	display1(a);
	dispaly2(syohin);//�l�n��
	display3(&syohin);//�A�h���X�n��
	//��������������m�F����
	dispaly2(syohin);
}
void display1(int a)
{
	printf("a=%d\n", a);
}
void dispaly2(struct syohindata syohin)
{
	printf("syohin.name = %s syohin.tanka=%d\n",
		syohin.name, syohin.tanka);
}
void display3(struct syohindata* p)
{
	printf("syohin.name = %s syohin.tanka=%d\n",
		p->name, p->tanka);

	//�A�h���X���󂯎���Ă���̂�
	//�������\
	strcpy(p->name, "�l�グ�����S��");
	p->tanka = 100;
	//�P����100�ɏ���
}

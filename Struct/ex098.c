#include <stdio.h>
#define DATAEND -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken kendata[] =
	{ {1,"�k�C��",NULL},
	  {2,"�X",NULL},
	  {3,"���",NULL},
	  {4,"�{��",NULL},
	  {5,"�H�c",NULL},
	  {6,"�R�`",NULL},
	  {7,"����",NULL},
  {DATAEND,"",NULL } };
	struct ken* p, * wp;
	struct ken hyogo = { 28,"����",NULL };
	struct ken oosaka = { 27,"���",NULL };
	//�����N�̐ݒ�
	p = wp = kendata;
	do {
		p++;//1���
		wp->next = p;
		wp = p;
	} while (p->code != DATAEND);

	//�k�C���ƐX�̊Ԃɕ��ɂ����
	kendata[0].next = &hyogo;
	hyogo.next = &kendata[1];
	//�������̌��ɑ��ǉ�
	kendata[6].next = &oosaka;
	oosaka.next = &kendata[7];

	//�����N�̕\��
	for (p = kendata; p->code != DATAEND; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}
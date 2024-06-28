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
	{ {1,"–kŠC“¹",NULL},
	  {2,"ÂX",NULL},
	  {3,"ŠâŽè",NULL},
	  {4,"‹{é",NULL},
	  {5,"H“c",NULL},
	  {6,"ŽRŒ`",NULL},
	  {7,"•Ÿ“‡",NULL},
  {DATAEND,"",NULL } };
	struct ken* p, * wp;

	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = kendata;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATAEND);
	//ƒf[ƒ^]‚Ìíœ
	//ÂX‚Ìnext‚É‹{é‚ÌƒAƒhƒŒƒX‚¢‚ê‚é
	kendata[1].next = &kendata[3];

	//ŽRŒ`Œ§‚ðÁ‚·

	kendata[4].next = &kendata[6];
	

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = kendata; p->code != DATAEND; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}
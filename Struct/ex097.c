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
	{DATAEND,"",NULL }};
	struct ken* p, * wp;

	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = kendata;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATAEND);
	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = kendata; p->code != DATAEND; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}
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
	{ {1,"kCΉ",NULL},
	  {2,"ΒX",NULL},
	  {3,"βθ",NULL},
	  {4,"{ι",NULL},
	  {5,"Hc",NULL},
	  {6,"R`",NULL},
	  {7,"",NULL},
  {DATAEND,"",NULL } };
	struct ken* p, * wp;

	//NΜέθ
	p = wp = kendata;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATAEND);
	//f[^]Μν
	//ΒXΜnextΙ{ιΜAhX’κι
	kendata[1].next = &kendata[3];

	//R`§πΑ·

	kendata[4].next = &kendata[6];
	

	//NΜ\¦
	for (p = kendata; p->code != DATAEND; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}
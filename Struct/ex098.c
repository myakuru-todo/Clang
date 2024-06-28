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
	struct ken hyogo = { 28,"•ºŒÉ",NULL };
	struct ken oosaka = { 27,"‘åã",NULL };
	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = kendata;
	do {
		p++;//1‚Âæ‚Ö
		wp->next = p;
		wp = p;
	} while (p->code != DATAEND);

	//–kŠC“¹‚ÆÂX‚ÌŠÔ‚É•ºŒÉ‚¢‚ê‚é
	kendata[0].next = &hyogo;
	hyogo.next = &kendata[1];
	//•Ÿ“‡Œ§‚ÌŒã‚ë‚É‘åã’Ç‰Á
	kendata[6].next = &oosaka;
	oosaka.next = &kendata[7];

	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = kendata; p->code != DATAEND; p = p->next) {
		printf("code = %d name = %s\n", p->code, p->name);
	}
}
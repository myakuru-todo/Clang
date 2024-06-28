#include <stdio.h>
struct syohindata {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	
	struct syohindata syohin[3] = { {"ƒGƒ“ƒsƒc",30,5},
								{ "Á‚µƒSƒ€",50,2 },
								{ "•M” ",500,3 } };
	struct syohindata* p=syohin;
    
	
	int i;
	
	for (i = 0; i < 3; i++) {
		printf("¤•i–¼:%s\t", p->name);
		printf("’P‰¿:%4d\t", p->tanka);
		printf("ŒÂ”:%.4d\t",p->kosuu);
		printf("‹àŠz:\\%d\n",p->tanka * p->kosuu);
		p++;
	}
}
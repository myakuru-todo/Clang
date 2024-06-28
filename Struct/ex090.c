#include <stdio.h>
struct syohindata {
	char name[20];
	int tanka;
};
main()
{
	struct syohindata syohin;
	struct syohindata* p;
	p = &syohin;
	printf("¤•i–¼=");
	scanf("%s", p->name);
	p->tanka = 30;
	printf("p->name = %s\n", p->name);
	printf("p->tanak = %d\n", p->tanka);
    printf("syouhin.name= %s\n",syohin.name);
	printf("syohin.tanka = %d\n",syohin.tanka);



}
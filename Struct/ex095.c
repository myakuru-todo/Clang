#include <stdio.h>
struct syohindata {
	char name[20];
	int tanka;
};
void display1(int a);
void dispaly2(struct syohindata syohin);

main()
{
	int a = 10;
	struct syohindata syohin = { "‚¯‚µ‚²‚Þ",50 };
	display1 (a);
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

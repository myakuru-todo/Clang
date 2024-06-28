//ex096.c
//アドレス渡し
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
	struct syohindata syohin = { "けしごむ",50 };
	display1(a);
	dispaly2(syohin);//値渡し
	display3(&syohin);//アドレス渡し
	//書き換わったか確認する
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

	//アドレスを受け取っているので
	//書換が可能
	strcpy(p->name, "値上げ消しゴム");
	p->tanka = 100;
	//単価を100に書換
}

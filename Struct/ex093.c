#include <stdio.h>
struct syohindata {
	char name[20];
	int tanka;
	int kosuu;
};
main()
{
	
	struct syohindata syohin[3] = { {"�G���s�c",30,5},
								{ "�����S��",50,2 },
								{ "�M��",500,3 } };
	struct syohindata* p=syohin;
    
	
	int i;
	
	for (i = 0; i < 3; i++) {
		printf("���i��:%s\t", p->name);
		printf("�P��:%4d\t", p->tanka);
		printf("��:%.4d\t",p->kosuu);
		printf("���z:\\%d\n",p->tanka * p->kosuu);
		p++;
	}
}
#include <stdio.h>
struct syohindata {
	char name[20];
		int tanka;
		int kosuu;
};
main()
{
	struct syohindata syohin[3] = { {"���M",30,5},
								{ "�����S��",50,2 },
								{ "�M��",500,3 } };
	int i;
	for (i = 0; i < 3; i++) {
		printf("���i��:%s\t", syohin[i].name);
		printf("�P��:%4d\t", syohin[i].tanka);
		printf("��:%.4d\n", syohin[i].kosuu);
	}
}
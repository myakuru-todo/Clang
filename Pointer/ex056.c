#include <stdio.h>

main()
{
	int  tbl[][3] = { {10,20,30},
					{40,50,60 },
					{70,80,90} };
	int *ptbl, i;
	ptbl = tbl[0];
	printf("2次元配列tblの内容\n");
	for (i = 0; i < (9); i++) {
		printf(" %d ", *ptbl++);
	}
}
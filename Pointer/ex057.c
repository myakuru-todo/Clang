#include <stdio.h>

main()
{
	int  tbl[][3] = { {10,20,30},
					{40,50,60 },
					{70,80,90} };
	int* ptbl, i,j;
	ptbl = &tbl[0][0];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {

			printf(" %d ", *ptbl++);

		}
		printf("\n");
	}
	
	
}
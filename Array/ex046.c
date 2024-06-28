#include <stdio.h>

main()
{
	/*int i, j, gokei;
	int a[2][3] = { {10,20,30,} ,{1,2,3,} };
	//２行３列ッて意味
	for (gokei = 0, i = 0; i < 3; i++) {
		for (j = 0; j < 1; j++) {
			printf("a[0][%d] = %d\n", i, a[j][i]);
			gokei += a[j][i];
		}
		//はじめ何が入ってるかわからないから、0クリアしてる
	}
	printf("0行目の合計=%d\n\n", gokei);
	for (gokei = 0, i = 0; i < 3; i++) {
		for (j = 1; j <2; j++) {
			printf("a[0][%d] = %d\n", i, a[j][i]);
			gokei += a[j][i];
		}
	}
	printf("１行目の行列=%d\n", gokei);
	*/

	int i, j, gokei;
	int a[2][3] = { {10,20,30,},{1,2,3,} };
	
	for (i = 0; i < 2; i++) {
		for (j = 0, gokei = 0; j < 3; j++) {
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%d行目の行列= %d\n\n",i, gokei);
	}
}
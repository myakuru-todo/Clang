#include <stdio.h>

main()
{
	int i, gokei;
	int a[2][3] = { {10,20,30,} ,{1,2,3,} };
	//２行３列ッて意味
	for (gokei = 0, i = 0; i < 3; i++) {
		printf("a[0][%d] = %d\n", i, a[0][i]);
		gokei += a[0][i];
		//はじめ何が入ってるかわからないから、0クリアしてる
	}
	printf("0行目の合計=%d\n\n", gokei);
	for (gokei = 0, i = 0; i < 3; i++) {
		printf("a[0][%d] = %d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("１行目の行列=%d\n", gokei);
}
#include <stdio.h>
void unti(int x, int y, int* wa, float* sa);

main()
{
	int a, b, c;
	float e;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	unti(a, b, &c, &e);
	printf("合計は%d  平均は%.2f", c, e);
}
void unti(int x, int y, int* wa, float* sa)
{
	*wa = x + y;
	*sa = (x + y) / 2.0;
	return;
}
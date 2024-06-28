#include <stdio.h>
void unti(int x, int y, int* wa, float* sa);

main()
{
	int a, b, c;
	float e;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	unti(a, b, &c, &e);
	printf("‡Œv‚Í%d  •½‹Ï‚Í%.2f", c, e);
}
void unti(int x, int y, int* wa, float* sa)
{
	*wa = x + y;
	*sa = (x + y) / 2.0;
	return;
}
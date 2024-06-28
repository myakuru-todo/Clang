#include <stdio.h>
int gokei(int d1, int d2,int d3);
float hikakin(int d1, int d2,int d3);

main()
{
	int d1, d2, d3,g;
	float  h;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &d1, &d2, &d3);
	g = gokei(d1,d2,d3);
	h = hikakin(d1, d2, d3);
	printf("‡Œv‚Í%d‚Å‚·\n", g);
	printf("•½‹Ï‚Í%.2f‚Å‚·",h);

}
int gokei(int d1, int d2,int d3)
{
	int g;
	g = d1 + d2 + d3;
	return g;
	//return d1+d2+d3;
	/*‚±‚ê‚Å‚à‚¢‚¢*/
}
float hikakin(int d1, int d2, int d3)
{
	float h;
	h = (d1 + d2 + d3) / 3.0;
	return h;
}

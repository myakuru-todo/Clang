#include <stdio.h>
int gokei(int d1, int d2,int d3);
float hikakin(int d1, int d2,int d3);

main()
{
	int d1, d2, d3,g;
	float  h;
	printf("������3����:");
	scanf("%d%d%d", &d1, &d2, &d3);
	g = gokei(d1,d2,d3);
	h = hikakin(d1, d2, d3);
	printf("���v��%d�ł�\n", g);
	printf("���ς�%.2f�ł�",h);

}
int gokei(int d1, int d2,int d3)
{
	int g;
	g = d1 + d2 + d3;
	return g;
	//return d1+d2+d3;
	/*����ł�����*/
}
float hikakin(int d1, int d2, int d3)
{
	float h;
	h = (d1 + d2 + d3) / 3.0;
	return h;
}

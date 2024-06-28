#include <stdio.h>

int tblgokei(int* p);
int tblgokei2(int tbl[]);

main()
{
	int a[] = { 10,20,30,40,-999 }, gokei;
	gokei = tblgokei(a);
	printf(" gokei = %d\n", gokei);
	gokei = tblgokei2(a);
	printf(" gokei = %d\n", gokei);
}
int tblgokei(int* p)
{
	int gokei = 0;
	while (*p!=-999)
	{
		gokei += *p;
		p++;
	}
	return gokei;
}
int tblgokei2(int tbl[])
{
	int gokei = 0, i;
	for (i = 0; tbl[i] != -999; i++)
	{
		gokei += tbl[i];

	}
	return gokei;
}
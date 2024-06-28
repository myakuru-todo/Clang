#include <stdio.h>
int tblgokei3(int tbl[], int number);

main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tblgokei3(a, 5);
	printf("gokei = %d\n", gokei);
}
int tblgokei3(int tbl[], int number)
{
	int gokei = 0, i;
	for (i = 0; i < 5; i++)
	{
		gokei += tbl[i];
	}
	return gokei;
}
#include <stdio.h>

main() 
{

	int gokei, ia;
	gokei = 0;
	printf("�������");
	scanf("%d", &ia);
	while (ia != -999) {

		gokei += ia;
		printf("�������");
		scanf("%d", &ia);
	}
	printf("��������=%d\n", gokei);
}
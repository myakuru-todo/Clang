#include <stdio.h>

main() 
{

	int gokei, ia;
	gokei = 0;
	printf("数入れて");
	scanf("%d", &ia);
	while (ia != -999) {

		gokei += ia;
		printf("数入れて");
		scanf("%d", &ia);
	}
	printf("ごうけい=%d\n", gokei);
}
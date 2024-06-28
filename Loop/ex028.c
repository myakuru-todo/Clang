#include <stdio.h>

main() 
{

	int gokei, ia;
	gokei = 0;
	printf("”“ü‚ê‚Ä");
	scanf("%d", &ia);
	while (ia != -999) {

		gokei += ia;
		printf("”“ü‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‚²‚¤‚¯‚¢=%d\n", gokei);
}
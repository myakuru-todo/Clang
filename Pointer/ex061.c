#include <stdio.h>

main()
{
	char data[10] = "orange";
	char* pd;
	char* p = "apple";
	pd = data;
	printf("data[]=");
	while (*pd) {
		putchar(*pd++);

	}
	printf("\n*p=");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}
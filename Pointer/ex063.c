#include <stdio.h>

main()
{
	char* pd[3] = { "car","bus","sinkansen" };
	int i;
	for (i = 0; i < 3; i++) {
		printf("%s ",pd[i]);
	}
}
#include <stdio.h>

main()
{
	char* pgame[3] = { "wiiiiii","swich","playstation5" };
	int i;
	char** p;
	i = 0;
	p = &pgame[i];
	for (i = 0; i < 3; i++) {
		p = &pgame[i];
		while (**p) {
			printf("%c", **p);
			(*p)++;
		}
		printf("\n");
	}

}
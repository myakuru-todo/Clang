#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a,nu;
	nu = 0;
	srand(time(0));
	rand();
	a = rand() % 5 + 1;
	printf("¡“ú‚Ì‰^¨‚Í");
	while  (nu < a) {
		printf("š");
		nu++;
	}
	printf(" ‚Å‚·B");
}
#include <stdio.h>

main() 
{
	int i;
	printf("break test progurami\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			break;
		}
		printf("%d ", i);
	}
	printf("\ncontinue test progurami\n");
	for (i = 1; i <= 10; i++) {
		if (i == 7) {
			continue;
		}
		printf("%d ", i);
	}
}
#include <stdio.h>

main() {


	int a, b, num;
	printf("���́H");
	scanf("%d", &num);
	a = 0;
	do {
		b = 0;
		do {
			printf("*");
			b++;
		} while (b < a+1);
		printf("\n");
		a++;

	} while (num > a);
	

	
}

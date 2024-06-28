#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int a,b,c;
	b = 0;
	srand(time(0));
	rand();
	
		for (b = 0; b < 100; b++) {
			
			printf("%4d ", rand() % 300 + 1);
			if (b % 10 == 0) {
				printf("\n");
			}
			

		}
	
}
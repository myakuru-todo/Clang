#include <stdio.h>

main()
{
	int a=0;
	
	while (1)
	{   
		printf("\n整数:");
		scanf("%d", &a);
		
		if (a != -999) {
			printf("8進数 %o\n", a);
			printf("16進数 %x", a);
		}
	}
}
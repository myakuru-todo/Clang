#include<stdio.h>

main()
{
	int a=0,b=0;
	while (a <= 300) {
		a += b;
		b++;
		printf("%d+", b);
	}
	printf("%d",a);
}
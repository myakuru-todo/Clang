#include <stdio.h>

main()
{
	int i;
	double  a[10] = 
	{ 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	
	for (i = 0; i <= 9; i++) {
		printf("a[%d] =  %f\n", i, a[i]);
	}
}
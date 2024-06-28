#include <stdio.h>

main()
{
	float sum, x[3][2];
	int i, j;
	for (i=0, j = 0; i < 3; i++) {
		for (sum = 0, j = 0; j < 2; j++) {
			printf("x[%d][%d]=",i,j);
			scanf("%f", &x[i][j]);
			sum += x[i][j];
		}
		printf("%ds–Ú•½‹Ï‚Í%.2f\n\n",i, sum / 2);
	}
}
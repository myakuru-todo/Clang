#include <stdio.h>

main()
{
	int i, j, k,sun;
		int a[2][2][3] = { { {3,4,5},{4,5,6}},
			               {{2,2,3},{2,5,6} } };
	for (sun=0,i = 0; i < 2; i++) {
		printf("�A�p�[�g%d", i+1);
		for (j = 0; j < 2; j++) {
			printf("(%d�K):", j + 1);

			for (k = 0; k < 3; k++) {
				printf("%d ", a[i][j][k]);
				sun += a[i][j][k];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�", sun);
}
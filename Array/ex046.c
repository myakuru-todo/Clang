#include <stdio.h>

main()
{
	/*int i, j, gokei;
	int a[2][3] = { {10,20,30,} ,{1,2,3,} };
	//�Q�s�R��b�ĈӖ�
	for (gokei = 0, i = 0; i < 3; i++) {
		for (j = 0; j < 1; j++) {
			printf("a[0][%d] = %d\n", i, a[j][i]);
			gokei += a[j][i];
		}
		//�͂��߉��������Ă邩�킩��Ȃ�����A0�N���A���Ă�
	}
	printf("0�s�ڂ̍��v=%d\n\n", gokei);
	for (gokei = 0, i = 0; i < 3; i++) {
		for (j = 1; j <2; j++) {
			printf("a[0][%d] = %d\n", i, a[j][i]);
			gokei += a[j][i];
		}
	}
	printf("�P�s�ڂ̍s��=%d\n", gokei);
	*/

	int i, j, gokei;
	int a[2][3] = { {10,20,30,},{1,2,3,} };
	
	for (i = 0; i < 2; i++) {
		for (j = 0, gokei = 0; j < 3; j++) {
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%d�s�ڂ̍s��= %d\n\n",i, gokei);
	}
}
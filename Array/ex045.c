#include <stdio.h>

main()
{
	int i, gokei;
	int a[2][3] = { {10,20,30,} ,{1,2,3,} };
	//�Q�s�R��b�ĈӖ�
	for (gokei = 0, i = 0; i < 3; i++) {
		printf("a[0][%d] = %d\n", i, a[0][i]);
		gokei += a[0][i];
		//�͂��߉��������Ă邩�킩��Ȃ�����A0�N���A���Ă�
	}
	printf("0�s�ڂ̍��v=%d\n\n", gokei);
	for (gokei = 0, i = 0; i < 3; i++) {
		printf("a[0][%d] = %d\n", i, a[1][i]);
		gokei += a[1][i];
	}
	printf("�P�s�ڂ̍s��=%d\n", gokei);
}
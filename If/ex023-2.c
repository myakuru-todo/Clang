#include <stdio.h>

main() {

	int a;
	printf("�������� :");
	scanf("%d", &a);
	
	//                ���@�@�@�@�@  �܂���
		if (a % 4 == 0 && a % 100 !=0 || a % 400 == 0) {

			printf("�[�N");
		}
		else {

			printf("�[�N�ł͂Ȃ�.");
		}
// && ||����̎g�������}�X�^�[���悤�B
}
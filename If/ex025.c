#include <stdio.h>

main() {

	char moji;
	printf("��������� :");
	scanf("%c", &moji);

	if (moji >= 'A' && moji<= 'Z'){

		printf("�啶���ł��B");
	}
	else {
		if(moji >='a' && moji<= 'z') {
			printf("�������ł��B");

		}
		else {
			if (moji >= '0' && moji<= '9') {

				printf("�����ł��B");
			}

			else {

				printf("���̑��̕����ł��B");
			}

		}
	}


}  
#include <stdio.h>

main() {

	char moji;
	printf("��������� :");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {

		printf("%c=�啶���ł�", moji);


	}
	else {

		printf("���̑��̕����ł��B");


	}
}
#include <stdio.h>

main() {

	char moji;
	printf("��������� :");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {

		printf("�啶��");

	}
	else {
		if (moji >= 'a' && moji <= 'z') {

			printf("������");
		}
		else {

			printf("error");


		}
	}

}
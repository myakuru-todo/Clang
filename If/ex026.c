#include <stdio.h>

main() {

	int month;
	printf("������� :");
	scanf("%d", &month);

	if (month == 2) {

		printf("�ŏI����28");
	}
	else {
		if (month == 4 || month == 6 || month == 8 || month == 9 || month == 11) {

			printf("�ŏI����30�ł��B");


		}
		else {

			printf("�ŏI����31�ł��B");
		}
	}
}
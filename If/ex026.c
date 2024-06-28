#include <stdio.h>

main() {

	int month;
	printf("月を入力 :");
	scanf("%d", &month);

	if (month == 2) {

		printf("最終日は28");
	}
	else {
		if (month == 4 || month == 6 || month == 8 || month == 9 || month == 11) {

			printf("最終日は30です。");


		}
		else {

			printf("最終日は31です。");
		}
	}
}
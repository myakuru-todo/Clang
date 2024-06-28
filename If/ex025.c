#include <stdio.h>

main() {

	char moji;
	printf("文字を入力 :");
	scanf("%c", &moji);

	if (moji >= 'A' && moji<= 'Z'){

		printf("大文字です。");
	}
	else {
		if(moji >='a' && moji<= 'z') {
			printf("小文字です。");

		}
		else {
			if (moji >= '0' && moji<= '9') {

				printf("数字です。");
			}

			else {

				printf("その他の文字です。");
			}

		}
	}


}  
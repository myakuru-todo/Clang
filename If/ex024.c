#include <stdio.h>

main() {

	char moji;
	printf("文字を入力 :");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {

		printf("%c=大文字です", moji);


	}
	else {

		printf("その他の文字です。");


	}
}
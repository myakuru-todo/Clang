#include <stdio.h>

main() {

	char moji;
	printf("•¶Žš‚ð“ü—Í :");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {

		printf("‘å•¶Žš");

	}
	else {
		if (moji >= 'a' && moji <= 'z') {

			printf("¬•¶Žš");
		}
		else {

			printf("error");


		}
	}

}
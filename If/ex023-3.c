#include <stdio.h>

main() {

	int en, a1, a2;

	printf("演算子を入力");
	scanf("%d",&en);
	printf("２つの整数を入力");
	scanf("%d%d", &a1, &a2);
	if (1 == en) {

		printf("答え:%d", a1 + a2);
	}
	else {
		if (2 == en) {


			printf("答え=%d", a1 - a2);
		}
		else {

			if (3 == en) {

				printf("答え= %d",a1 * a2);

			}
			else {

				if (en == 4) {

					printf("答え=%d", a1 /a2);
				}

				else {


					printf("演算子に１から４の数値を入れてね");
				}

			}


		}



	}
}
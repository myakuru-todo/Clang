#include <stdio.h>

main() {

	int en, a1, a2;

	printf("���Z�q�����");
	scanf("%d",&en);
	printf("�Q�̐��������");
	scanf("%d%d", &a1, &a2);
	if (1 == en) {

		printf("����:%d", a1 + a2);
	}
	else {
		if (2 == en) {


			printf("����=%d", a1 - a2);
		}
		else {

			if (3 == en) {

				printf("����= %d",a1 * a2);

			}
			else {

				if (en == 4) {

					printf("����=%d", a1 /a2);
				}

				else {


					printf("���Z�q�ɂP����S�̐��l�����Ă�");
				}

			}


		}



	}
}
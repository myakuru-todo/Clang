#include <stdio.h>

main() {

	int en, a1, a2;

	printf("‰‰Zq‚ğ“ü—Í");
	scanf("%d",&en);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
	scanf("%d%d", &a1, &a2);
	if (1 == en) {

		printf("“š‚¦:%d", a1 + a2);
	}
	else {
		if (2 == en) {


			printf("“š‚¦=%d", a1 - a2);
		}
		else {

			if (3 == en) {

				printf("“š‚¦= %d",a1 * a2);

			}
			else {

				if (en == 4) {

					printf("“š‚¦=%d", a1 /a2);
				}

				else {


					printf("‰‰Zq‚É‚P‚©‚ç‚S‚Ì”’l‚ğ“ü‚ê‚Ä‚Ë");
				}

			}


		}



	}
}
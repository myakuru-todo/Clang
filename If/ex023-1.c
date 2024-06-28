#include <stdio.h>

main() {

	int no, a1, a2, a3;
	printf("•b”‚ğ“ü—Í");
	scanf("%d", &no);
	a1 = (no % 3600) / 60;
	a2 = no / 3600;
	a3 = (no % 3600) % 60;
	if (no < 0){

		printf("ƒvƒ‰ƒX‚Ì’l‚ğ“ü—Í‚µ‚Ä‚Ë");

	}
	else {
		if (no >= 5000){
			printf("error error error error error error");
		}
		else {

			
			printf("%dŠÔ%d•ª%d•b", a2, a1, a3);
		}

	}




}
#include <stdio.h>

main() {
	int i,k[30];
	char s[10];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("k[%d]‚Ì•œ†‰»ƒL[",i);
		scanf("%d", &k[i]);
		s[i] = s[i]-k[i];
		
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚Í%s", s);
}
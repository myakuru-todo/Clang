#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, n, k[10];
	char s[10];
	srand(time(0));

	printf("“ü—Í");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) 
	{
		//—”‚ð‹‚ß‚é
		k[i] = rand() % 6;
		//ˆÃ†‰»ƒvƒƒOƒ‰ƒ€
		s[i] = s[i] + k[i];
	}
	printf("ˆÃ†‰»•¶Žš—ñ>%s\n", s);
	printf("ˆÃ†‰»key‚Í>");
	
	for (n = 0; n < i; n++) {
		printf("%d",k[n]);
	}
}
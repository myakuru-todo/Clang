#include <stdio.h>

main()
{
	char moji1[100], moji2[100], W[100];
	int i;
	printf("•¶š—ñ1‚ğ‚É‚ã‚¤‚è‚å‚­");
	scanf("%s", &moji1);
	printf("•¶š—ñ‚Q‚ğ“ü—Í");
	scanf("%s", &moji2);
	printf("moji1 = %s  moji2 = %s\n", moji1, moji2);
	//
	for (i = 0; moji1[i] != '\0'; i++) {
		W[i] = moji1[i];
	}
	W[i] = '\0';//‚O“ü‚ê–Y‚ê’ˆÓ
	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
		for (i = 0; W[i] != '\0'; i++) {
			moji2[i] = W[i];
		}
	moji2[i] = '\0';

	printf("moji1  = %s,moji2 = %s", moji1, moji2);
}
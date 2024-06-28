#include <stdio.h>
#define CNT 3
main()
{
	char* pd[CNT] = { "car","bus","sinkansen" };
	char* p;
	int i;
	p = *pd;
	for (i = 0; i < CNT; i++) {
		p = pd[i];
		while( *p) {
			printf("%c", *p++);
			/*putchar(*p++)‚Å‚à‚¨‚‹*/
		}
		printf("\n");
		/*putchar('\n')‚Å‚à‚¨‚‹*/
		
	}

}
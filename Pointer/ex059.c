#include <stdio.h>

main()
{
	char data[15] = "C Languege";
	char data2[15];
	char* p, * p2;
	p = &data[0];
	p2 = &data2[0];
	printf("data[]=%s\n", p);
	while (*p2++ = *p++);/*•¶š—ñ‚ÌƒRƒs[*/
	p2 = data2;
	printf("data2[]=%s\n", p2);
	while (*p) {
		putchar(*p2++);
	}
	printf("\n");
}
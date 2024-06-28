#include <stdio.h>

main()
{
	char data[15] = "Language";
	char* p,ch;
	int i=0;
	p = data;
	printf("data[]=%s\n", p);
	printf("ŒŸõ•¶š‚Í?");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚Í");
	while (*(p + i)) {
		if (ch == *(p + i)) {

			printf(" %d ", i+1);
		}
		i++;
	}
	printf("•¶š–Ú‚Å‚·");
}
#include<stdio.h>

main() {

	char *i[] = { "Dispaly","Keyboard","Mouse","Printer" };
	char ** p = i;

	printf("%c\n", i[3][2]);
	p++;
	printf("%s\n", *(p+1));
	printf("%s", *p + 1);
}
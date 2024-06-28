#include <stdio.h>

main()
{
	char moji;
	printf("‰‰Zq‚¢‚ê‚Ä");
	scanf("%c", &moji);

	switch (moji)
	{
	case '/':  printf( "œZ‚Å‚·");
		break;
	case '*':  printf("æZ‚Å‚·");
		break;
	case '+':  printf("‰ÁZ‚Å‚·");
		break;
	case '-': printf("Œ¸Z‚Å‚·");
		break;

	default:
		break;
	}
}